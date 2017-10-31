/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Salt.h
 * Author: ayush
 *
 * Created on 21 October, 2017, 12:48 AM
 */

#ifndef SALT_H
#define SALT_H
#include <string>

using namespace std;

class Salt {
public:
    Salt() {}
    virtual string saltedValue(string key){};
protected:
    ~Salt() {}
    int seedValue;
    virtual void generateSalt(){};
};

#endif /* SALT_H */

