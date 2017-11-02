#include "parser.h"
#include "filereader.h"
#include "state.h"
using namespace std;

Parser::Parser()
{

}

string Parser::getEncryptedData(string password,string file){
    FileReader fr(file);
    string fileContent = fr.readAll();
    State state;
    int StartPos;
    int i = 0;
    while(true){
        size_t startPosHeader = fileContent.find(password , i);
        if(startPosHeader == string::npos)
            break;
        StartPos = startPosHeader + 512;
        if(StartPos == fileContent.find(state.getOpeningDelimiter(),startPosHeader + 1)){
            int textStartPos = StartPos + state.getOpeningDelimiter().length();
            int textEndPos = fileContent.find(state.getClosingDelimiter(),StartPos + 1);
            return fr.read(textStartPos , textEndPos - textStartPos);
        }
        i = startPosHeader + 1;
    }
    return state.getOpeningDelimiter().append(state.getClosingDelimiter());
}
