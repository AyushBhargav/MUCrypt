#include <encrypter.h>
#include <timesaltgeneration.h>
#include <filereader.h>
#include <filewriter.h>
#include <shadriver.h>
#include <aesalgorithm.h>

Encrypter::Encrypter()
{

}

void Encrypter::encrypt(int start, int end, string password, string file, int algorithm) {
    Salt* salt = TimeSaltGeneration(512 - password.length());
    string generatedSalt = salt->saltedValue(password);

    string hash = password;
    SHADriver shaDriver;
    for(int i = 0; i < state.n_hashing; i++) {
        hash = shaDriver.sha256(hash);
    }
    FileReader fr(file);
    string fileContent = fr.read(start, end - start + 1);
    fr.close();

    CrypticAlgorithm* c_algorithm = NULL;
    string* algorithmArgs;

    switch(algorithm) {
    case 1:
        c_algorithm = new AESAlgorithm;
        algorithmArgs = new string[2];
        algorithmArgs[0] = hash;
        algorithmArgs[1] = fileContent;
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    }

    string encryptedContent = c_algorithm->encrypt(algorithmArgs, fileContent);

    FileWriter fw(file);
    string data_writable = state.openingDelimiter + encryptedContent + state.closingDelimiter;
    fw.write(start, end, data_writable);
}
