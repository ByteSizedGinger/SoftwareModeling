#include "Electronics.h"
#include <iostream>
#include <string>
using namespace std;

Electronics::Electronics(){
    type = "Electronics";
}

Electronics* Electronics::cpy() { //might have to make return type Car*
	Electronics* temp = new Electronics();
	temp.speed = speed;
	temp->next = nullptr;
	return temp;
}

void Electronics::removePart(string part) {
    if (part == this->getType()) cout << part << " has been removed." << endl;
    else DepartmentOutput::removePart(part);
}

int Electronics::getSpeed(){
    return speed * 10;
}

Car* Electronics::clone() {
	Car* temp = cpy();
	if (next != nullptr)
	{
		temp->next = next->clone();
	}
	return temp;
}