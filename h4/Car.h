#ifndef CAR_H
#define CAR_H

#include <string>
#include "Engine.h"
#include "Wheel.h"

using std::string;

class Car {
    private:
    Engine objEngine;
    Wheel objWheel1;
    Wheel objWheel2;
    Wheel objWheel3;
    Wheel objWheel4;
    string brand;
    string model;
    
    public:
    Car();
    Car(string brand, string model);

    void setEngine(int hp, double disp);
    void setWheels(int size, string type);

    string getModel() const;
    void setModel(string model);

    string getBrand() const;
    void setBrand(string brand);

    void printDetails() const;
};

#endif