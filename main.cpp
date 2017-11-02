#include <iostream>
#include <parser.h>
#include <string.h>
#include <dispatcher.h>

using namespace std;

int main(int argc, string args[])
{
    Dispatcher dispatcher;
    dispatcher.process(args);
    cout<<parser.getEncryptedData("hi","text.txt").encryptedContent<<endl;
}
