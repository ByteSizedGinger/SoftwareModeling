#ifndef SEASON_H
#define SEASON_H

#include "Team/Team.h"
#include "Season/Race.h"
#include "Season/RaceIterator.h"

using namespace std;

class Season {

	private:
		static Season* singleton;
		list<Team*> teams;
		list<Race**> races;
		Season();
		~Season();

	public:
		static Season instance();
		void addTeam(Team* team);
		void addRace(Race* race);
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
