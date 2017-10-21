/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ayush
 *
 * Created on 21 October, 2017, 12:46 AM
 */

#include <iostream>
#include <cstdlib>
#include "Salt.h"
#include "TimeSaltGeneration.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    string password("password");
    Salt* salt = new TimeSaltGeneration();
    cout<<salt->saltedValue(password);
    return 0;
}

