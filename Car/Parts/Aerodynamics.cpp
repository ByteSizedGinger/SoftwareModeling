#include "Aerodynamics.h"
#include <iostream>
#include <string>
using namespace std;

Aerodynamics::Aerodynamics(){
    type = "Aerodynamics";
}

Aerodynamics* Aerodynamics::cpy() { //might have to make return type Car*
	Aerodynamics* temp = new Aerodynamics();
	temp.speed = speed;
	temp->next = nullptr;
	return temp;
}

void Aerodynamics::removePart(string part) {
    if (part == this->getType()) cout << part << " has been removed." << endl;
    else DepartmentOutput::removePart(part);
}

double Aerodynamics::getSpeed(){
    return speed * 1000;
}

Car* Aerodynamics::clone() {
	Car* temp = cpy();
	if (next != nullptr)
	{
		temp->next = next->clone();
	}
	return temp;
}