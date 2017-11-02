#ifndef STATE_H
#define STATE_H

#include <string>

using namespace std;

class State
{
private:
    string salt;
    string password;
    int n_hashing;
    string openingDelimiter;
    string closingDelimiter;
public:
    State();
    void setSalt(string salt);
    void setPassword(string password);
    string getSalt();
    string getPassword();
    int getN_hashing();
    string getOpeningDelimiter();
    string getClosingDelimiter();
};

#endif // STATE_H
