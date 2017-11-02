#ifndef DISPATCHER_H
#define DISPATCHER_H

#include <string>

using namespace std;

class Dispatcher
{
public:
    Dispatcher();
    void process(string args[]);
};

#endif // DISPATCHER_H
