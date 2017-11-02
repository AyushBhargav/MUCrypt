#include "dispatcher.h"
#include "string"
#include "encrypter.h"
#include "decrypter.h"
#include "parser.h"

Dispatcher::Dispatcher()
{

}

void Dispatcher::process(string args[]){
    //0 - enc/dec
    //1 - filename
    //2 - password
    //3 - start
    //4 - end

    if(args[0] == "encrypt"){
        Encrypter encrypter;
        encrypter.encrypt(stoi(args[3]),stoi(args[4]),args[2],args[1]);
    }
    else if(args[0] == "decrypt"){
        Parser parser;
        Decrypter decrypter;
        decrypter.decrypt(parser.getEncryptedData(args[2],args[1]),args[1]);
    }
}

