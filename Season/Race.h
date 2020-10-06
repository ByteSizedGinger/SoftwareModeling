#ifndef RACE_H
#define RACE_H

class Race {

private:
	int laps;
	boolean european;
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

	boolean isEuropean();

	void runFreePractice2();

	void runRaceWeekend(Car** c);
};

#endif
