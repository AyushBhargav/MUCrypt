#include <iostream>
#include <parser.h>
#include <string.h>

using namespace std;

int main()
{
    Parser parser;
    cout<<parser.getEncryptedData("hi","text.txt").encryptedContent<<endl;
}
