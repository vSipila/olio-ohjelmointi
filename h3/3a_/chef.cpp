#include <iostream>
#include "header.h"
using namespace std;

int main() {
    ItalianChef anthony("Anthony Bourdain");
    anthony.makeSalad();     
    anthony.makeSoup();      
    anthony.makePasta();      
    cout << "name of the Italian Chef is " << anthony.getName() << endl;
}