#include "Aerodynamics.h"
#include <iostream>
#include <string>
using namespace std;

Aerodynamics::Aerodynamics(){
    type = "Aerodynamics";
}

void Aerodynamics::removePart(string part) {
    if (part == this->getType()) cout << part << " has been removed." << endl;
    else DepartmentOutput::removePart(part);
}

double Aerodynamics::getSpeed(){
    return speed * 1000;
}