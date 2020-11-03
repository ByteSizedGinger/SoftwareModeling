#include "Team/Department/ChassisFactory.h"

ChassisFactory::ChassisFactory(DepartmentMediator* mediator) : DepartmentFactory(mediator){

}

ChassisFactory::~ChassisFactory(){

}
    
Car *ChassisFactory::createPart() {
    if (part) {
        delete part;
    }

    //create new part
    part = new Chassis();

    //determine if the part could be better
    //give 20% chance for part to be better,  part is not better iff (speed <= 0)
    if (part->calculateSpeed() > 0) {
        car->removePart("Chassis");
        car->addPart(part);

        //tell other departments that a new part has been added
        mediator->communicate(part);
    }

    //send Car back to Team
    return car;
}

void ChassisFactory::simulation(){
    cout << "The driver is using the simulator to adjust to the weight distribution of the chassis." << endl;

    //get the speed of the part
    int speed = part->calculateSpeed() % 5;

    cout << "The Chassis shows a speed of " << speed << "/5" << endl;
}

void ChassisFactory::otherPartChanged(DepartmentOutput* part){
    cout << "The Chassis department confirms that they have received the message about the new " << part->getType() << endl;
}

string ChassisFactory::getType(){
    return "Chassis";
}