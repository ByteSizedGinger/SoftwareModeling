#ifndef TEAM_H
#define TEAM_H

#include "Car/CurrentSeason.h"
#include "Team/Transport/Container/Container.h"
#include "Team/Transport/Strategy/TransportStrategy.h"
#include "Team/Department/DepartmentFactory.h"
#include "Team/Department/DepartmentMediator.h"
#include "Team/TeamPoints.h"
#include "Car/NextSeason.h"

class Team {

	private:
		CurrentSeason** currentCars;
		Container* container;
		TransportStrategy* transportStrategy;
		DepartmentFactory** departments;
		int name;
		DepartmentMediator* mediator;
		TeamPoints* constructorPoints;
		NextSeason* nextSeasonCar;

	public:
//Michael will debug transport and strategy
//Caleb will debug parts and upgrading them
//Jenna will debug tyres points drivers
    Team();

    Team(int string_name);
		~Team();
		void transport();
		void orderTyres();
		CurrentSeason** getCurrentSeasonCars();
		void setEuropeanStrategy();
		void setNonEuropeanStrategy();
		string getName();
		void partChanged();
		void updatePoints();
		void upgrade();
};

#endif
