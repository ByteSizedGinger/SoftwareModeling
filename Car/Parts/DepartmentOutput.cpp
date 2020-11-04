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

int DepartmentOutput::calculateSpeed(){
	int s = this->getSpeed();
	int rtrn;
	if(next != nullptr){
		if(!(dynamic_cast<CurrentSeason*>(next))){
			averageSpeed += s + next->calculateSpeed();
			rtrn = averageSpeed;
		}else{
			averageSpeed += s;
			rtrn = averageSpeed;
			averageSpeed = 0;
		}
	}
	return rtrn;
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

