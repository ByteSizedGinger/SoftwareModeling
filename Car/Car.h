#ifndef CAR_H
#define CAR_H

using namespace std;

class Car {
private:
    double averageSpeed;
    Driver *driver;

public:
    Car();

    int getPoints();

    void addPoints(int p);

    void addPart(Car *part) = 0;

    void calculateSpeed() = 0;

    Car *clone();

    void simulate() = 0;

    void setRaceTime(int) = 0;        // raceTime = param
    void incrementRaceTime(int) = 0;    //raceTime += param
};

#endif
