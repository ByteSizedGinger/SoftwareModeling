#ifndef TEAM_H
#define TEAM_H

class Team {

private:
	CurrentSeason** currentCars;
	int constructorPoints;
	Container* container;
	TransportStrategy* transportStrategy;
	Department** departments;
	int name;

public:
	Team();

	Team(int string_name);

	void transport();

	void orderTyres();

	currentSeason** getCurrentSeasonCars();

	void setEuropeanStrategy();

	void setNonEuropeanStrategy();

	string getName();
};

#endif
