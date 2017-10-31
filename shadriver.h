#ifndef SHADRIVER_H
#define SHADRIVER_H

#include <string>

using namespace std;

class SHADriver
{
public:
    SHADriver();
    string sha256(const string str);
};

#endif // SHADRIVER_H
