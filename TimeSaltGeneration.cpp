/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TimeSaltGeneration.cpp
 * Author: ayush
 * 
 * Created on 21 October, 2017, 12:54 AM
 */

#include "TimeSaltGeneration.h"
#include <string>
#include <cstdlib>
#include <sstream>

TimeSaltGeneration::TimeSaltGeneration(int length = 512) {
    
    if(length > 512)
        throw new InvalidSaltException();
    this->saltLength = length;
    this->generateSalt();
}

TimeSaltGeneration::TimeSaltGeneration(const TimeSaltGeneration& orig) {
}

TimeSaltGeneration::~TimeSaltGeneration() {
}

TimeSaltGeneration::generateSalt() {
    
    srand(time(NULL));
    int startAscii = 33;
    int endAscii = 122;

    ostringstream buffer;

    for(int i = 0; i < this->saltLength; i++) {
        char r_ch = rand() * endAscii + startAscii;
        buffer << r_ch;
    }

    int fillerChar = 126;
    for(int i = this->saltLength; i < 512; i++) {
        buffer << fillerChar;
    }
    
    this->generatedSalt = buffer.str();
    
}

TimeSaltGeneration::saltedValue(string key) {
    
    return key + this->generatedSalt;
    
}
