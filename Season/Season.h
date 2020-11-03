#ifndef SEASON_H
#define SEASON_H

#include "Team/Team.h"
#include "Season/Race.h"
#include "Season/RaceIterator.h"

using namespace std;

class Season {

	private:
		static Season* singleton;
		Team** teams;
		int numTeams;
		Race** races;
		int numRaces;
		Season();
		~Season();
		void orderTyres();
		Car **getCars();
		void displayConstructorsStandings();
		void displayDriversStandings();
		void transport(bool european);
		RaceIterator *createIterator();
		void upgradeTeamCars();

	public:
		static Season instance();
		void addTeam(Team* team);
		void addRace(Race* race);
		void runSeason();
};

#endif
