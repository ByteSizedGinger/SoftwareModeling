#ifndef DEPARTMENTMEDIATOR_H
#define DEPARTMENTMEDIATOR_H

#include "Car/Car.h"
#include "Team/Team.h"
#include "Team/Department/DepartmentFactory.h"


using namespace std;

class DepartmentMediator {
private:
    DepartmentFactory **departments;
    Team *team;

public:
    DepartmentMediator();

    ~DepartmentMediator();

    void communicate(Car *car);

    void attachDepartment(DepartmentFactory *department);


};

#endif