#include "Engine.h"
#include <string>
using std::string;

Engine::Engine() : horsepower(150), displacement(2.0) {}
Engine::Engine(int hp, double disp) : horsepower(hp), displacement(disp) {}
int Engine::getHorsepower() const {
    return horsepower;
}
void Engine::setHorsepower(int hp) {
    horsepower = hp;
}
double Engine::getDisplacement() const {
    return displacement;
}
void Engine::setDisplacement(double disp) {
    displacement = disp;
}