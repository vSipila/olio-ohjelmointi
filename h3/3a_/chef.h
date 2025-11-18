#include <iostream>
#include <string>
using namespace std;

class Chef {
protected:
    string name;                     

public:
    Chef(string n) : name(n) {        
        cout << "Chef " << name << " konstruktori" << endl;
    }

    ~Chef() {                        
        cout << "Chef " << name << " destruktori" << endl;
    }

    void makeSalad() {               
        cout << "Chef " << name << " makes salad" << endl;
    }

    void makeSoup() {                 
        cout << "Chef " << name << " makes soup" << endl;
    }
};

class ItalianChef : public Chef {
public:
    ItalianChef(string n) : Chef(n) {
        cout << "ItalianChef " << name << " konstruktori" << endl;
    }

    ~ItalianChef() {
        cout << "ItalianChef " << name << " destruktori" << endl;
    }

    string getName() {
        return name;
    }

    void makePasta() {
        cout << "ItalianChef " << name << " makes pasta" << endl;
    }
};
