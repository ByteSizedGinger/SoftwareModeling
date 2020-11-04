#include "Team/Department/ChassisFactory.h"

ChassisFactory::ChassisFactory(DepartmentMediator* mediator) : DepartmentFactory(mediator){

}

ChassisFactory::~ChassisFactory(){

}
    
void ChassisFactory::createPart(DepartmentOutput* oldPart){
    //create new part
    Chassis* part = new Chassis();

    //determine if the part could be better
    //give 20% chance for part to be better,  part is not better iff (speed <= 0)
    if(part->getSpeed() > getPartSpeed(oldPart, "Chassis")){
        //tell other departments that the new part is better, the team will add the part when it is passed to it by: team->partChanged(part);
        mediator->communicate(part);
    }

    //de-allocate part
    delete part;
}

void ChassisFactory::simulation(){
    cout << "The driver is using the simulator to adjust to the weight distribution of the chassis." << endl;
}

void ChassisFactory::otherPartChanged(DepartmentOutput* part){
    cout << "The Chassis department confirms that they have received the message about the new " << part->getType() << endl;
}

string ChassisFactory::getType(){
    return "Chassis";
}