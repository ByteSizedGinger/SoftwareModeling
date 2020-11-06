#ifndef SEASON_H
#define SEASON_H

//colours for output
#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"

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
		void updateTeamPoints();

	public:
		static Season instance();
		~Season();
		void addTeam(string teamName, string driver1, string driver2);
		void addRace(int length, bool european, int date, string name, int averageLapTime);
		void runSeason();
};

#endif
