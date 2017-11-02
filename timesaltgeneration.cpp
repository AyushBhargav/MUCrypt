#include <timesaltgeneration.h>
#include <invalidsaltexception.h>
#include <string>
#include <cstdlib>
#include <sstream>
#include <iostream>
#include <sys/time.h>

using namespace std;

TimeSaltGeneration::TimeSaltGeneration(int length) {

    if(length > 512 || length == 0) {
        InvalidSaltException e;
        throw e;
    }
    this->saltLength = length;
    this->generateSalt();
}

TimeSaltGeneration::TimeSaltGeneration(const TimeSaltGeneration& orig) {
}

TimeSaltGeneration::~TimeSaltGeneration() {
}

void TimeSaltGeneration::generateSalt() {

    srand(time(NULL));
    int startAscii = 33;
    int endAscii = 123;
    int totalCharsAllowed = endAscii - startAscii;
    ostringstream buffer;

    for(int i = 0; i < this->saltLength; i++) {
        char r_ch = rand() % startAscii + startAscii;
        buffer << r_ch;
    }

    /*int fillerChar = 126;
    for(int i = this->saltLength; i < 512; i++) {
        buffer << fillerChar;
    }*/

    this->generatedSalt = buffer.str();

}

string TimeSaltGeneration::saltedValue(string key) {

    return key + this->generatedSalt;

}
