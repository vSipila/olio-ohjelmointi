#include <iostream>
#include "ClassB.h"
#include "ClassA1.h"
#include "ClassA2.h"
using namespace std;

int main()
{
   
    int a = 5;

    cout << "a:n arvo on: " << a << " ja osoite on: " << &a << endl;

    int* pointerA = &a;

    cout << "Pointerin osoittama osoite on: " << pointerA << endl;
    cout << "Pointerin osoittaman muistipaikan arvo on: " << *pointerA << endl;


  
    int& refA = a;

    cout << "\nrefA osoittaa osoitteeseen on: " << &refA << endl;
    cout << "refA:n osoittaman muistipaikan arvo on: " << refA << endl;

   
    int b = 6;

   
    pointerA = &b;

   


   
    cout << "\n--- ClassA1 testaus (kopio) ---" << endl;

    ClassB objB;
    objB.setInfo("Olio B asettama info");

    ClassA1 objA1(objB);   
    objA1.setBinfo("Olio A1 asettama info");

    cout << "objB: " << objB.getInfo() << endl;  
    cout << "objA1: " << objA1.getBinfo() << endl; 


  
    cout << "\n--- ClassA2 testaus (viittaus) ---" << endl;

    ClassB& refB = objB;
    ClassA2 objA2(refB);  

    objA2.setBinfo("Olio A2 asettama info");

    cout << "objB: " << objB.getInfo() << endl;     
    cout << "objA2: " << objA2.getBinfo() << endl; 
    return 0;
}
