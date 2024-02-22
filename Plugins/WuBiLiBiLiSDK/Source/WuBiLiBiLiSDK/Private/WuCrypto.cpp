/*
Copyright(c) 2023 B站UP：虚幻4-无. All Rights Reserved.
版权所有(c) 2023 B站UP：虚幻4-无，保留所有权利。

B站主页：https://space.bilibili.com/381317561
商务合作：
微信（电话同号）：15689882600
qq：1910991875
接游戏开发、数字孪生、数字人、AIGC
*/


#include "WuCrypto.h"
#include "Misc/SecureHash.h"
#include "Misc/Crc.h"
#include "HAL/PlatformFilemanager.h"
#include "Misc/FileHelper.h"
#include "Misc/Base64.h"
#include "GenericPlatform/GenericPlatformFile.h"
#include <string>
#include <sstream>
#include <iomanip>
//#include "Keccak/sha3.h"

#define UI UI_ST
THIRD_PARTY_INCLUDES_START
#include "openssl/sha.h"
#include "openssl/md5.h"
#include "openssl/rsa.h"
#include "openssl/pem.h"
#include "openssl/err.h"
#include "openssl/aes.h"
#include "openssl/rand.h"
THIRD_PARTY_INCLUDES_END
#undef UI



WuCrypto::~WuCrypto()
{
}

WuCrypto::WuCrypto()
{
}

const EVP_MD* GetDigestEVP(EWuDigestAlgorithm HashType) {
	
	OpenSSL_add_all_digests();
	const EVP_MD* EVP = nullptr;
	
	switch (HashType)
	{
	case(EWuDigestAlgorithm::MDC2):
		EVP = EVP_get_digestbyname("mdc2"); // EVP_mdc2();
		break;
	case(EWuDigestAlgorithm::MD4):
		EVP = EVP_md4();
		break;
	case(EWuDigestAlgorithm::MD5):
		EVP = EVP_md5();
		break;
	case(EWuDigestAlgorithm::MD5_SHA1):
		EVP = EVP_get_digestbyname("md5-sha1"); //  EVP_md5_sha1(); 
		break;
	case(EWuDigestAlgorithm::SHA1):
		EVP = EVP_sha1();
		break;
	case(EWuDigestAlgorithm::SHA224):
		EVP = EVP_sha224();
		break;
	case(EWuDigestAlgorithm::SHA256):
		EVP = EVP_sha256();
		break;
	case(EWuDigestAlgorithm::SHA384):
		EVP = EVP_sha384();
		break;
	case(EWuDigestAlgorithm::SHA512_224):
		EVP = EVP_get_digestbyname("sha512-224"); //  EVP_sha512_224();
		break;
	case(EWuDigestAlgorithm::SHA512_256):
		EVP = EVP_get_digestbyname("sha512-256"); //  EVP_sha512_256();
		break;
	case(EWuDigestAlgorithm::SHA3_224):
		EVP = EVP_get_digestbyname("sha3-224"); //  EVP_sha3_224();
		break;
	case(EWuDigestAlgorithm::SHA3_256):
		EVP = EVP_get_digestbyname("sha3-256"); //  EVP_sha3_256();
		break;
	case(EWuDigestAlgorithm::SHA3_384):
		EVP = EVP_get_digestbyname("sha3-384"); //  EVP_sha3_384();
		break;
	case(EWuDigestAlgorithm::SHA3_512):
		EVP = EVP_get_digestbyname("sha3-512"); //  EVP_sha3_512();
		break;
	case(EWuDigestAlgorithm::SHA512):
		EVP = EVP_sha512();
		break;
	case(EWuDigestAlgorithm::RIPEMD160):
		EVP = EVP_ripemd160();
		break;
	case(EWuDigestAlgorithm::WHIRLPOOL):
		EVP = EVP_get_digestbyname("whirlpool"); // EVP_whirlpool();
		break;
	case(EWuDigestAlgorithm::SHAKE128):
		EVP = EVP_get_digestbyname("shake128"); // EVP_shake128();
		break;
	case(EWuDigestAlgorithm::SHAKE256):
		EVP = EVP_get_digestbyname("shake256"); // EVP_shake256();
		break;
	}

	return EVP;
	
}


bool WuCrypto::HMACString(const FString& String, const FString& Key, FString& Hash, EWuDigestAlgorithm HashType)
{
	const std::string MsgStr = TCHAR_TO_UTF8(*String);
	Hash = HMAC(reinterpret_cast<const uint8*>(MsgStr.c_str()), MsgStr.size(), Key, HashType);
	return !Hash.IsEmpty();
}

FString WuCrypto::HMAC(const uint8* Data, uint32 Size, const FString& Key, EWuDigestAlgorithm HashType)
{
	FString Digest;

	if (!IsDigestSupported(HashType))
	{
		return Digest;
	}

	EVP_MD_CTX* EVPCtx = nullptr;
	EVP_PKEY* PKey = nullptr;

	do
	{
		TArray<uint8> Hash;
		Hash.SetNum(EVP_MAX_MD_SIZE);

		size_t Len = 0;
		const EVP_MD* EVP = GetDigestEVP(HashType);
		EVPCtx = EVP_MD_CTX_create();

		if (!EVPCtx)
		{
			break;
		}

		const std::string KeyStr = TCHAR_TO_UTF8(*Key);
		PKey = EVP_PKEY_new_mac_key(EVP_PKEY_HMAC, NULL, reinterpret_cast<const unsigned char*>(KeyStr.c_str()), KeyStr.size());

		if (!PKey)
		{
			break;
		}

		if (1 != EVP_DigestSignInit(EVPCtx, NULL, EVP, NULL, PKey))
		{
			break;
		}

		if (1 != EVP_DigestSignUpdate(EVPCtx, Data, Size))
		{
			break;
		}

		if (1 != EVP_DigestSignFinal(EVPCtx, Hash.GetData(), &Len))
		{
			break;
		}

		Hash.SetNum(Len);

		Digest = BytesToHex(Hash.GetData(), Hash.Num());
	} while (false);

	EVP_MD_CTX_destroy(EVPCtx);
	EVP_PKEY_free(PKey);

	return Digest;
	//return false;
}

bool WuCrypto::IsDigestSupported(EWuDigestAlgorithm HashType)
{
	return GetDigestEVP != nullptr;
}
/*
const EVP_MD* WuCrypto::GetDigestEVP(EWuDigestAlgorithm HashType)
{

	OpenSSL_add_all_digests();
	const EVP_MD* EVP = nullptr;

	switch (HashType)
	{
	case(EWuDigestAlgorithm::MDC2):
		EVP = EVP_get_digestbyname("mdc2"); // EVP_mdc2();
		break;
	case(EWuDigestAlgorithm::MD4):
		EVP = EVP_md4();
		break;
	case(EWuDigestAlgorithm::MD5):
		EVP = EVP_md5();
		break;
	case(EWuDigestAlgorithm::MD5_SHA1):
		EVP = EVP_get_digestbyname("md5-sha1"); //  EVP_md5_sha1(); 
		break;
	case(EWuDigestAlgorithm::SHA1):
		EVP = EVP_sha1();
		break;
	case(EWuDigestAlgorithm::SHA224):
		EVP = EVP_sha224();
		break;
	case(EWuDigestAlgorithm::SHA256):
		EVP = EVP_sha256();
		break;
	case(EWuDigestAlgorithm::SHA384):
		EVP = EVP_sha384();
		break;
	case(EWuDigestAlgorithm::SHA512_224):
		EVP = EVP_get_digestbyname("sha512-224"); //  EVP_sha512_224();
		break;
	case(EWuDigestAlgorithm::SHA512_256):
		EVP = EVP_get_digestbyname("sha512-256"); //  EVP_sha512_256();
		break;
	case(EWuDigestAlgorithm::SHA3_224):
		EVP = EVP_get_digestbyname("sha3-224"); //  EVP_sha3_224();
		break;
	case(EWuDigestAlgorithm::SHA3_256):
		EVP = EVP_get_digestbyname("sha3-256"); //  EVP_sha3_256();
		break;
	case(EWuDigestAlgorithm::SHA3_384):
		EVP = EVP_get_digestbyname("sha3-384"); //  EVP_sha3_384();
		break;
	case(EWuDigestAlgorithm::SHA3_512):
		EVP = EVP_get_digestbyname("sha3-512"); //  EVP_sha3_512();
		break;
	case(EWuDigestAlgorithm::SHA512):
		EVP = EVP_sha512();
		break;
	case(EWuDigestAlgorithm::RIPEMD160):
		EVP = EVP_ripemd160();
		break;
	case(EWuDigestAlgorithm::WHIRLPOOL):
		EVP = EVP_get_digestbyname("whirlpool"); // EVP_whirlpool();
		break;
	case(EWuDigestAlgorithm::SHAKE128):
		EVP = EVP_get_digestbyname("shake128"); // EVP_shake128();
		break;
	case(EWuDigestAlgorithm::SHAKE256):
		EVP = EVP_get_digestbyname("shake256"); // EVP_shake256();
		break;
	}

	return EVP;
}
*/