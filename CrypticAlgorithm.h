/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CrypticAlgorithm.h
 * Author: ayush
 *
 * Created on 1 November, 2017, 1:11 AM
 */

#ifndef CRYPTICALGORITHM_H
#define CRYPTICALGORITHM_H

class CrypticAlgorithm {
public:
    virtual string encrypt(string args[], int n);
    virtual string decrypt(string args[], int n);
protected:
    ~CrypticAlgorithm() {}
};

#endif /* CRYPTICALGORITHM_H */

