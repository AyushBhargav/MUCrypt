#ifndef DECRYPTER_H
#define DECRYPTER_H
#include "state.h"
#include "encryptedfilestate.h"
class Decrypter
{
private:
    State state;
public:
    Decrypter();
    void decrypt(EncryptedFileState efs,string file);
};

#endif // DECRYPTER_H
