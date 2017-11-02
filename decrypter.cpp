#include "decrypter.h"
#include "filewriter.h"

Decrypter::Decrypter()
{

}

void Decrypter::decrypt(EncryptedFileState efs,string file){
    string hash = efs.password;
    SHADriver shaDriver;
    for(int i = 0; i < state.getN_hashing(); i++) {
        hash = shaDriver.sha256(hash);
    }

    CrypticAlgorithm* c_algorithm = new AESAlgorithm;
    string* algorithmArgs = new string[2];
    algorithmArgs[0] = hash;
    algorithmArgs[1] = efs.encryptedContent;
    int n_args = 2;

    string decryptedContent = c_algorithm->decrypt(algorithmArgs,n_args);
    FileWriter fw(file);
    fw.write(efs.startPosition,efs.endPosition,decryptedContent);
    delete algorithmArgs;
}
