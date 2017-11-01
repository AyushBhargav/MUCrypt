#ifndef AESALGORITHM_H
#define AESALGORITHM_H

#include <crypticalgorithm.h>

class AESAlgorithm : public CrypticAlgorithm
{
public:
    AESAlgorithm();
    string encrypt(string args[], int n);
    string decrypt(string args[], int n);
};

#endif // AESALGORITHM_H
