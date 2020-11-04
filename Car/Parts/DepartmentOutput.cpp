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
	if(next != nullptr && !(dynamic_cast<CurrentSeason*>(next))){
		if(next->getType() == part){
			Car* temp = next;
			this->next = temp->next;			//removes it from the list
			temp->removePart(part);			//calls the concrete removePart() for the cout
			delete temp;
		}
	}
	else cout << part << " could not be found." << endl;
}

void DepartmentOutput::addPart(Car* part){
	if(next != nullptr){
		if(!(dynamic_cast<CurrentSeason*>(next)))	//if next is not CurrentSeason type
			next->addPart(part);
		else{					//if it is CurrentSeason
			part->next = this->next;
			this->next = part;
		}
	}
	else next = part;
}

double DepartmentOutput::calculateSpeed(){
	double s;
	if(this->getSpeed() < 0) s = this->getSpeed()/139040		//this is to make s in the range [-1,0] (negative speed)
	else s = this->getSpeed()/35200					//this is to make s in the range [0,1] (positive speed)
	averageSpeed += next != nullptr ? s + next->calculateSpeed() : s;
	return averageSpeed;
}

DepartmentOutput::~DepartmentOutput(){
	delete this->next;
}

void setRaceTime(int rt) {
    next->setRaceTime(rt);
}

void incrementRaceTime(int rt) {
    next->incrementRaceTime(rt);
}

int getRaceTime() {
    return next->getRaceTime();
}

void setDriver(Driver* d){
	next->setDriver(d);
}

