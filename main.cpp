#include <iostream>
#include <aesalgorithm.h>
#include <shadriver.h>
using namespace std;

int main()
{
    AESAlgorithm aesAlgorithm;
    SHADriver sha;
    string s1[] = {sha.sha256("key"), string("Hello world")};
    string enc = aesAlgorithm.encrypt(s1, 2);
    cout<<enc<<endl;
    s1[1] = enc;
    string dec = aesAlgorithm.decrypt(s1, 2);
    cout<<dec<<endl;
    return 0;
}
