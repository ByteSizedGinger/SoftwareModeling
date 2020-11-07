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
/**
 * @class
 * @headerfile
 */
class Team {

private:
    Car **currentCars;/*! @var */
    Container *container;/*! @var */
    TransportStrategy *transportStrategy;/*! @var */
    DepartmentFactory **departments;/*! @var */
    string name;/*! @var */
    DepartmentMediator *mediator;/*! @var */
    int constructorPoints;/*! @var */
    Car *nextSeasonCar;/*! @var */

public:
/**
 *
 * @param string_name
 * @param driver1Name
 * @param driver2Name
 */
    Team(string string_name, string driver1Name, string driver2Name);

/**
 *
 */
    ~Team();

/**
 *
 */
    void transport();

/**
 *
 */
    void orderTyres();

/**
 *
 * @return
 */
    Car **getCurrentSeasonCars();

/**
 *
 */
    void setEuropeanStrategy();

/**
 *
 */
    void setNonEuropeanStrategy();

/**
 *
 * @return
 */
    string getName();

/**
 *
 * @param part
 * @param season
 */
    void partChanged(DepartmentOutput* part, string season);

/**
 *
 */
    void updatePoints();

/**
 *
 */
    void upgrade();

/**
 *
 * @return
 */
    int getConstructorPoints();


};

#endif
