#include <shadriver.h>
#include <openssl/sha.h>
#include <iomanip>
#include <sstream>
#include <iostream>

using namespace std;

SHADriver::SHADriver()
{

}

string SHADriver::sha256(const string str) {
    stringstream ss;

    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256_CTX sha_256;
    SHA256_Init(&sha_256);
    SHA256_Update(&sha_256, str.c_str(), str.size());
    SHA256_Final(hash, &sha_256);
    for(int i = 0; i < SHA256_DIGEST_LENGTH; i++) {
        ss << hex << setw(2) << setfill('0') << (int)hash[i];
    }

    return ss.str();
}
