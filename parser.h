#ifndef PARSER_H
#define PARSER_H
#include <string>
#include <encryptedfilestate.h>
using namespace std;
class Parser
{
public:
    Parser();
    EncryptedFileState getEncryptedData(string password,string file);
};

#endif // PARSER_H
