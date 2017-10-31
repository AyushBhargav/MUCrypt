#ifndef TIMESALTGENERATION_H
#define TIMESALTGENERATION_H

#include <salt.h>
#include <string>

using namespace std;

class TimeSaltGeneration : public Salt{
public:
    TimeSaltGeneration(int length);
    TimeSaltGeneration(const TimeSaltGeneration& orig);
    ~TimeSaltGeneration();
    virtual string saltedValue(string key);
private:
    int saltLength;
    string generatedSalt;
    virtual void generateSalt();
};

#endif // TIMESALTGENERATION_H
