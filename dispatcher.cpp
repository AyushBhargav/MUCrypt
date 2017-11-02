#include "dispatcher.h"
#include "string"
#include "encrypter.h"
#include "decrypter.h"
#include "parser.h"
#include "shadriver.h"
Dispatcher::Dispatcher()
{

}

void Dispatcher::process(string args[]){
    //1 - enc/dec
    //2 - filename
    //3 - password
    //4 - start
    //5 - end
    SHADriver shadriver;
    args[3] = shadriver.sha256(args[3]);
    if(args[1] == "encrypt"){
        Encrypter encrypter;
        encrypter.encrypt(stoi(args[4]),stoi(args[5]),args[3],args[2]);
    }
    else if(args[1] == "decrypt"){
        Parser parser;
        Decrypter decrypter;
        decrypter.decrypt(parser.getEncryptedData(args[3],args[2]),args[2]);
    }
}

