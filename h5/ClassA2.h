#ifndef CLASSA2_H
#define CLASSA2_H

#include <string>
#include "ClassB.h"
using namespace std;

class ClassA2 {
private:
    ClassB& refB;   

public:
    ClassA2(ClassB& value);  

    string getBinfo() const;
    void setBinfo(string value);
};

#endif