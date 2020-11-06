#include "CurrentSeason.h"
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

CurrentSeason::CurrentSeason(string n){
    raceTime = 0;
    //tyres = new Tyres();
    driver = new Driver(n);
    srand(time(0));
}

void CurrentSeason::addPoints(int p){
    driver->setPoints(driver->getPoints() + p);
}

void CurrentSeason::simulate() {    // each call of this function has on average 10% chance to increase performance by 1
    for (int j = 0; j < 10; j++) {
        int i = (rand() % 10 + 1);
        switch (i) {
            case 1:
                driver->setPerformance(driver->getPerformance() + 1);
            default:
                break;
        }
    }
}

int CurrentSeason::getPoints() {
    return driver->getPoints();
}

//int CurrentSeason::calculateSpeed() : Car::calculateSpeed(){	//not sure if this works but it would first call CalculateSpeed from the decorator and then this.
//	averageSpeed = averageSpeed + driver->getPerformance()/100;
//}

int
CurrentSeason::calculateSpeed() {    //not sure if this works but it would first call CalculateSpeed from the decorator and then this.
    // Car::calculateSpeed();
    averageSpeed = averageSpeed + driver->getPerformance() / 100;
    return averageSpeed;
}

Car *CurrentSeason::clone() {
    Car *temp = new CurrentSeason(driver->getName());
    return temp;
}

string CurrentSeason::getDriverName() {
    return driver->getDriver();
}

CurrentSeason::~CurrentSeason() {
    delete driver;
    //delete the tyres too
}

void CurrentSeason::setRaceTime(int rt) {
    raceTime = rt;
}

void CurrentSeason::incrementRaceTime(int rt) {
    raceTime += rt;
}

int CurrentSeason::getRaceTime() {
    return raceTime;
}

void CurrentSeason::setDriver(Driver *d) {
    driver = d;
}

string CurrentSeason::getType() {
    return "base";
}

void CurrentSeason::addTyres(Tyre** t, int num) {
    for(int i=0;i<num;i++){
        tyres.push(t[i]);
    }
}

void CurrentSeason::popOldTyre() {
    tyres.pop();
}

Tyre* CurrentSeason::currentTyre() {
    return tyres.front();
}
