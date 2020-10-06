#ifndef SEASON_H
#define SEASON_H

class Season {

private:
	Team** teams;
	Race** races;

public:
	Season();

	void displayConstructorsStandings();

	void runRace();

	void runSeason();

	void orderTyres();

	Car** getCars();

	void transport();
};

#endif
