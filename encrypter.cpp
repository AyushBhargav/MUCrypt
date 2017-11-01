#include <encrypter.h>
#include <timesaltgeneration.h>
#include <filereader.h>
#include <shadriver.h>

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

    CrypticAlgorithm* c_algorithm = NULL;
    switch(algorithm) {
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    }


}
