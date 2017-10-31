/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TimeSaltGeneration.h
 * Author: ayush
 *
 * Created on 21 October, 2017, 12:54 AM
 */

#ifndef TIMESALTGENERATION_H
#define TIMESALTGENERATION_H

#include "Salt.h"
#include <string>

using namespace std;

class TimeSaltGeneration : public Salt{
public:
    TimeSaltGeneration(int length);
    TimeSaltGeneration(const TimeSaltGeneration& orig);
    ~TimeSaltGeneration();
    virtual string saltedValue(string key);
private:
    int saltLength;
    string generatedSalt;
    virtual void generateSalt();
};

#endif /* TIMESALTGENERATION_H */

