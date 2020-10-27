#include "Team/Department/DepartmentMediator.h"

DepartmentMediator::DepartmentMediator(Team* team): team(team), currentDepartment(0){
    //initialise array of DepartmentFactories
    departments = new DepartmentFactory*[4];

    for(int i = 0; i < 4; ++i){
        departments[i] = nullptr;
    }
}

DepartmentMediator::~DepartmentMediator(){
    
}

void DepartmentMediator::communicate(DepartmentOutput* part){
    string partString = part->getType();

    for(int i = 0; i < 4; ++i){
        //tell all other departments of the newly added part
        if(departments[i]->getType() != partString){
            departments[i]->otherPartChanged(part);
        }
    }

    //tell the Team
    team->partChanged();
}

void DepartmentMediator::attachDepartment(DepartmentFactory* department){
    if(current < 4){
        departments[currentDepartment++] = department;
    }else{
        cout << "A department mediator can only mediate for a maximum of 4 departments" << endl;
    }
}