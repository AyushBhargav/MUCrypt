#ifndef SALT_H
#define SALT_H

#include <string>
using namespace std;

class Salt {
public:
    Salt() {}
    virtual string saltedValue(string key){};
protected:
    ~Salt() {}
    int seedValue;
    virtual void generateSalt(){};
};

#endif // SALT_H
