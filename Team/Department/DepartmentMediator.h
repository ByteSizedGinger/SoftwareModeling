#ifndef DEPARTMENTMEDIATOR_H
#define DEPARTMENTMEDIATOR_H

#include "Car/Car.h"
#include "Team/Team.h"
#include "Team/Department/DepartmentOutput.h"
#include "Team/Department/DepartmentFactory.h"

#include <string>
using namespace std;

class DepartmentMediator {
private:
    int currentDepartment;
    DepartmentFactory** departments;
    Team* team;

public:
    DepartmentMediator(Team* team);

    ~DepartmentMediator();

    void communicate(DepartmentOutput* part);

    void attachDepartment(DepartmentFactory* department);


};

#endif