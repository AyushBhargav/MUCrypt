#include <iostream>
#include <encrypter.h>
using namespace std;

int main()
{
    Encrypter encrypter;
    encrypter.encrypt(2,5,"hi","text.txt",1);
    return 0;
}
