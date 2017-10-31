/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   InvalidSaltException.cpp
 * Author: ayush
 * 
 * Created on 21 October, 2017, 12:49 AM
 */

#include "InvalidSaltException.h"

InvalidSaltException::InvalidSaltException() {
}

InvalidSaltException::InvalidSaltException(const InvalidSaltException& orig) {
}

InvalidSaltException::~InvalidSaltException() throw() {
    // Nothing to do here for now.
}

const char* InvalidSaltException::what() const throw(){
    return "Invalid salt.";
}
