#ifndef DEPARTMENTMEDIATOR_H
#define DEPARTMENTMEDIATOR_H

#include "Car/Car.h"
#include "Team/Team.h"
#include "Car/Parts/DepartmentOutput.h"
#include "Team/Department/DepartmentFactory.h"

#include <string>
using namespace std;

class DepartmentFactory;
class Team;
/**
 * @class
 * @headerfile
 */
class DepartmentMediator {
private:
    int currentDepartment;/*! @var */
    DepartmentFactory **departments;/*! @var */
    Team *team;/*! @var */

public:
    /**
     *
     * @param team
     */
    DepartmentMediator(Team *team);

/**
 *
 */
    ~DepartmentMediator();

/**
 *
 * @param part
 * @param season
 */
    void communicate(DepartmentOutput* part,string season);

/**
 *
 * @param department
 */
    void attachDepartment(DepartmentFactory* department);


};

#endif