#ifndef SEASON_H
#define SEASON_H

#include "Team/Team.h"
#include "Season/Race.h"
#include "Season/RaceIterator.h"

class Season {

	private:
		static Season* singleton;
		Team** teams;
		Race** races;
		Season();
		~Season();

	public:
		static Season* instance();
		void displayConstructorsStandings();
		void runRace();
		void runSeason();
		void orderTyres();
		void displayDriversStandings();
		Car **getCars();
		void transport();
		RaceIterator *createIterator();
		void upgradeTeamCars();
};

#endif
