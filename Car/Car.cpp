#include "Car.h"

Car::Car() {}
Car::~Car() {}
int Car::getPoints() {
	return 0;
}
void Car::addPoints(int p) {}
void Car::addPart(Car *part) {} 
void Car::simulate() {}
void Car::calculateSpeed() {}
void Car::setRaceTime(int t) {}        // raceTime = param
void Car::incrementRaceTime(int t) {}    //raceTime += param
int Car::getRaceTime() {
	return 0;
}
string Car::getDriverName() {
	return "";
}
void Car::setDriver(Driver* d) {}