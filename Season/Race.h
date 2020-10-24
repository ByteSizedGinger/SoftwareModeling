#ifndef RACE_H
#define RACE_H

#include <string>
#include "Car/Car.h"

using namespace std;

class Race {

private:
	int laps;
	bool european;
	int date;
	string name;
	Car** cars;

public:
	Race();

	void runRace();

	void printLeaderBoard();

	void runQualifying();

	void runFreePractice1();

	void pitStop();

	int getDate();

	bool isEuropean();

	void runFreePractice2();

	void runRaceWeekend(Car** c);
};

#endif
