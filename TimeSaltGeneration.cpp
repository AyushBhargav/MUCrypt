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
#include "InvalidSaltException.h"
#include <iostream>

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

    int fillerChar = 126;
    for(int i = this->saltLength; i < 512; i++) {
        buffer << fillerChar;
    }
    
    this->generatedSalt = buffer.str();
    
}

string TimeSaltGeneration::saltedValue(string key) {
    
    return key + this->generatedSalt;
    
}
