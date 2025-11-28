#include "Car.h"

int main() {
    Car car("Toyota", "Corolla");

    car.setEngine(150, 2.0);
    car.setWheels(17, "kesärengas");

    car.printDetails();

    return 0;
}