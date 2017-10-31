#ifndef STATE_H
#define STATE_H


class State
{
private:
    string salt;
    string password;
    int n_hashing;
    char openingDelimiter;
    char closingDelimiter;
public:
    State();
    void setSalt(string salt);
    void setPassword(string password);
    string getSalt();
    string getPassword();
};

#endif // STATE_H
