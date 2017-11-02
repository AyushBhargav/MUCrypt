#include "parser.h"
#include "filereader.h"
#include "state.h"
#include <encryptedfilestate.h>
#include <iostream>
using namespace std;

Parser::Parser()
{

}

EncryptedFileState Parser::getEncryptedData(string password,string file){
    FileReader fr(file);
    string fileContent = fr.readAll();
    State state;
    int startPos;
    int i = 0;
    bool isParsed = true;
    while(true){
        size_t startPosHeader = fileContent.find(password , i);
        if(startPosHeader == string::npos) {
            isParsed = false;
            break;
        }
        startPos = startPosHeader + 512;

        if(startPos == fileContent.find(state.getOpeningDelimiter(),startPos)){
            EncryptedFileState efs(isParsed);
            int textStartPos = startPos + state.getOpeningDelimiter().length();
            int textEndPos = fileContent.find(state.getClosingDelimiter(),startPos + 1);
            efs.startPosition = startPosHeader;
            efs.endPosition = textEndPos + state.getClosingDelimiter().length();
            efs.encryptedContent = fr.read(textStartPos , textEndPos - textStartPos);
            efs.password = password;
            return efs;
        }
        i = startPosHeader + 1;
    }
    EncryptedFileState efs(isParsed);
    return efs;
}
