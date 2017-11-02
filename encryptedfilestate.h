#ifndef ENCRYPTEDFILESTATE_H
#define ENCRYPTEDFILESTATE_H

#include <string>
using namespace std;

class EncryptedFileState
{
private:
    bool isParsed;
public:
    EncryptedFileState(bool isParsed);
    int startPosition;
    int endPosition;
    string EncryptedContent;
    string password;
    bool getParsedStatus();
};

#endif // ENCRYPTEDFILESTATE_H
