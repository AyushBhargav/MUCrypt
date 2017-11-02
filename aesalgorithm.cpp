#include <aesalgorithm.h>
#include <openssl/aes.h>
#include <string>

using namespace std;

AESAlgorithm::AESAlgorithm()
{

}

string AESAlgorithm::encrypt(string args[], int n) {
    char oneKey[args[0].length()] = {args[0].c_str()};
    AES_KEY key; // must be 16 bytes
    AES_set_encrypt_key(oneKey, 128, &key);

    unsigned char content[args[1].length()] = args[1].c_str();
    unsigned char encryptedBuffer[1024];

    AES_encrypt(content, encryptedBuffer, key);

    string encryptedString(encryptedBuffer,1024);

    return encryptedBuffer;

}

string AESAlgorithm::decrypt(string args[], int n) {
    unsigned char oneKey[args[0].length()] = args[0].c_str();
    AES_KEY key; // must be 16 bytes
    AES_set_decrypt_key(oneKey, 128, &key);

    unsigned char encryptedBuffer[args[1].length()] = args[1].c_str();
    unsigned char content[1024];

    AES_decrypt(encryptedBuffer, content, key);

    string decryptedString(content);

    return decryptedString;
}
