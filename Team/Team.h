#ifndef TEAM_H
#define TEAM_H

#include "Car/CurrentSeason/CurrentSeason.h"
#include "Team/Transport/Container/Container.h"
#include "Team/Transport/Strategy/TransportStrategy.h"
#include "Team/Department/DepartmentFactory.h"
#include "Team/Department/DepartmentMediator.h"
#include "Car/NextSeason/NextSeason.h"
#include "Car/Parts/DepartmentOutput.h"

class DepartmentFactory;
class DepartmentMediator;

class Team {

private:
    Car **currentCars;
    Container *container;
    TransportStrategy *transportStrategy;
    DepartmentFactory **departments;
    string name;
    DepartmentMediator *mediator;
    int constructorPoints;
    Car *nextSeasonCar;

public:

    Team(string string_name, string driver1Name, string driver2Name);

    ~Team();

    void transport();

    void orderTyres();

    Car **getCurrentSeasonCars();

    void setEuropeanStrategy();

    void setNonEuropeanStrategy();

    string getName();

    void partChanged(DepartmentOutput* part, string season);

    void updatePoints();

    void upgrade();

    int getConstructorPoints();


};

#endif
