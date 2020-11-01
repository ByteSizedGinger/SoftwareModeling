#include "DepartmentOutput.h"

#include <string>
#include <iostream>
using namespace std;
DepartmentOutput::DepartmentOutput(){
	next = nullptr;
	type = "";
	averageSpeed = 0;
}

void DepartmentOutput::removePart(string part){
	if(next != nullptr){
		if(next->getType() == part){
			Car* temp = next;
			this->next = this->next->next;
			temp->removePart(part);
			delete temp;
		}
	}
	else cout << part << " could not be found." << endl;
}

void DepartmentOutput::addPart(Car* part){
	if(next!=nullptr){
		next->addPart(part);
	}
	else next = part;
}

double DepartmentOutput::calculateSpeed(){
	double s;
	if(this->getSpeed() < 0) s = this->getSpeed()/139040
	else s = this->getSpeed()/35200
	averageSpeed += next != nullptr ? s + next->calculateSpeed() : s;
	return averageSpeed;
}

DepartmentOutput::~DepartmentOutput(){
	delete this->next;
}
