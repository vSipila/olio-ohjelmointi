
#include "Wheel.h"
#include <string>
using std::string;

Wheel::Wheel() : size(16), type("Alloy") {}
Wheel::Wheel(int s, string t) : size(s), type(t) {}
int Wheel::getSize() const {
    return size;
}
void Wheel::setSize(int s) {
    size = s;
}
string Wheel::getType() const {
    return type;
}
void Wheel::setType(string t) {
    type = t;
}