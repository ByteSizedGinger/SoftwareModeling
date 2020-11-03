#include "Team/Department/ElectronicsFactory.h"

ElectronicsFactory::ElectronicsFactory(DepartmentMediator* mediator) : DepartmentFactory(mediator){

}

ElectronicsFactory::~ElectronicsFactory(){

}
    
Car *ElectronicsFactory::createPart() {
    if (part) {
        delete part;
    }

    //create new part
    part = new Electronics();

    //determine if the part could be better
    //give 20% chance for part to be better,  part is not better iff (speed <= 0)
    if (part->calculateSpeed() > 0) {
        car->removePart("Electronics");
        car->addPart(part);

        //tell other departments that a new part has been added
        mediator->communicate(part);
    }

    //send Car back to Team
    return car;
}

void ElectronicsFactory::simulation(){
    cout << "The driver is using the simulator to test the electronics, so they are familiar with the controls." << endl;

    //get the speed of the part
    int speed = part->calculateSpeed() % 5;

    cout << "The Electronics shows a speed of " << speed << "/5" << endl;
}

void ElectronicsFactory::otherPartChanged(DepartmentOutput* part){
    cout << "The Electronics department confirms that they have received the message about the new " << part->getType() << endl;
}

string ElectronicsFactory::getType(){
    return "Electronics";
}