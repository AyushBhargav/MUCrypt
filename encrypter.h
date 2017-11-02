#ifndef ENCRYPTER_H
#define ENCRYPTER_H

#include <string>
#include <state.h>

using namespace std;

class Encrypter
{
private:
    State state;
public:
    Encrypter();
    /*
     * Algorithm code :
     * 1. AES
     * 2. DES
     * 3. RSA
     * 4. Fuck urself
     * */
    void encrypt(int start, int end, string password, string file, int algorithm);
};

#endif // ENCRYPTER_H
