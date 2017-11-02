#include <encrypter.h>
#include <timesaltgeneration.h>
#include <filereader.h>
#include <filewriter.h>
#include <shadriver.h>
#include <aesalgorithm.h>

Encrypter::Encrypter()
{

}

void Encrypter::encrypt(int start, int end, string password, string file) {
    Salt* salt = new TimeSaltGeneration(512 - password.length());
    string generatedSalt = salt->saltedValue(password);

    string hash = password;
    SHADriver shaDriver;
    for(int i = 0; i < state.getN_hashing(); i++) {
        hash = shaDriver.sha256(hash);
    }
    FileReader fr(file);
    string fileContent = fr.read(start, end - start + 1);

    CrypticAlgorithm* c_algorithm = new AESAlgorithm;
    string* algorithmArgs = new string[2];
    algorithmArgs[0] = hash;
    algorithmArgs[1] = fileContent;
    int n_args = 2;

    string encryptedContent = c_algorithm->encrypt(algorithmArgs, n_args);

    FileWriter fw(file);
    string data_writable = generatedSalt + state.getOpeningDelimiter() + encryptedContent + state.getClosingDelimiter();
    fw.write(start, end, data_writable);
}
