#include <iostream>
#include <string.h>
#include <dispatcher.h>

using namespace std;

int main(int argc, char* args[])
{
    Dispatcher dispatcher;
    string* s_args = new string[argc];
    for(int i = 0; i < argc; i++) {
        s_args[i] = string(args[i]);
    }
    dispatcher.process(s_args);
}
