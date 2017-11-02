#ifndef CRYPTICALGORITHM_H
#define CRYPTICALGORITHM_H

#include <string>
using namespace std;

class CrypticAlgorithm {
public:
    virtual string encrypt(string args[], int n){};
    virtual string decrypt(string args[], int n){};
protected:
    ~CrypticAlgorithm() {}
};

#endif // CRYPTICALGORITHM_H
