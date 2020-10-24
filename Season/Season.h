#ifndef SEASON_H
#define SEASON_H

#include "Team/Team.h"
#include "Season/Race.h"
#include "Season/RaceIterator.h"

class Season {

private:
	Team** teams;
	Race** races;

public:
	Season();
	~Season();
	void displayConstructorsStandings();
	void runRace();
	void runSeason();
	void orderTyres();
	void displayDriversStandings();
	Car** getCars();
	void transport();
	RaceIterator* createIterator();
};

#endif
