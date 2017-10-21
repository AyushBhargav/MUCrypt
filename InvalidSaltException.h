/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   InvalidSaltException.h
 * Author: ayush
 *
 * Created on 21 October, 2017, 12:49 AM
 */

#ifndef INVALIDSALTEXCEPTION_H
#define INVALIDSALTEXCEPTION_H
#include <exception>

using namespace std;

class InvalidSaltException : public exception {
public:
    InvalidSaltException();
    InvalidSaltException(const InvalidSaltException& orig);
    ~InvalidSaltException();
    const char* what() const throw();
};

#endif /* INVALIDSALTEXCEPTION_H */

