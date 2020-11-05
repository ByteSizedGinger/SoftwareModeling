#include "Aerodynamics.h"
#include <iostream>
#include <string>
using namespace std;

Aerodynamics::Aerodynamics(){
    type = "Aerodynamics";
    speed = rand() % 500 + 500;

}

Aerodynamics* Aerodynamics::cpy() { //might have to make return type Car*
    Aerodynamics *temp = new Aerodynamics();
    temp->speed = speed;
    temp->next = nullptr;
    return temp;
}

void Aerodynamics::removePart(string part) {
    if (part == this->getType()) cout << part << " has been removed." << endl;
    else DepartmentOutput::removePart(part);
}

int Aerodynamics::getSpeed() {

    return speed;
}

Car* Aerodynamics::clone() {
    Aerodynamics *temp = cpy();
    if (next != nullptr) {
        temp->next = next->clone();
    }
    return temp;
}