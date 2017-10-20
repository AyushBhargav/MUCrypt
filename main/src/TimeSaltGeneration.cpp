#include "TimeSaltGeneration.h"
#include <cstdlib>
#include "InvalidSaltException.h"
#include <ctime>

TimeSaltGeneration::TimeSaltGeneration(int length) {

    if(length > 512)
        throw new InvalidSaltException();
    this.saltLength = length;
}

TimeSaltGeneration::~TimeSaltGeneration() {

    // Not applicable till now
}

TimeSaltGeneration::generateSalt() {
    srand(time(NULL));
    int startAscii = 33;
    int endAscii = 122;

    char* saltArr = new char[256];
    saltArr[255] = '\0';

    for(int i = 0; i < this.getSaltLength(); i++) {
        char r
    }


}
