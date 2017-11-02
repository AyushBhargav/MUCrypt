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
    void encrypt(int start, int end, string password, string file);
};

#endif // ENCRYPTER_H
