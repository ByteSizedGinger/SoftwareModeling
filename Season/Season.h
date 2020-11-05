#ifndef SEASON_H
#define SEASON_H

#include "Team/Team.h"
#include "Season/Race.h"
#include "Season/RaceIterator.h"
#include <string>

using namespace std;

class Season {

	private:
		static Season* singleton;
		Team** teams;
		int numTeams;
		Race** races;
		int numRaces;
		Season();
		void orderTyres();
		Car **getCars();
		void displayConstructorsStandings();
		void displayDriversStandings();
		void transport(bool european);
		RaceIterator *createIterator();
		void upgradeTeamCars();

	public:
		static Season instance();
		~Season();
		void addTeam(string teamName, string driver1, string driver2);
		void addRace(int length, bool european, int date, string name, int averageLapTime);
		void runSeason();
};

#endif
