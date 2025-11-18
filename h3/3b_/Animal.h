#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
using namespace std;

class Animal {
public:
    virtual ~Animal() = default;   

    virtual void callOut() {
        cout << "Eläin ääntelee." << endl;
    }
};