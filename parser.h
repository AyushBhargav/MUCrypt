#ifndef PARSER_H
#define PARSER_H
#include <string>
using namespace std;
class Parser
{
public:
    Parser();
    string getEncryptedData(string password,string file);
};

#endif // PARSER_H
