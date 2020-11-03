#include "Team/Department/EngineFactory.h"

EngineFactory::EngineFactory(DepartmentMediator* mediator) : DepartmentFactory(mediator){

}

EngineFactory::~EngineFactory(){

}
    
Car *EngineFactory::createPart() {
    if (part) {
        delete part;
    }

    //create new part
    part = new Engine();

    //determine if the part could be better
    //give 20% chance for part to be better,  part is not better iff (speed <= 0)
    if (part->calculateSpeed() > 0) {
        car->removePart("Engine");
        car->addPart(part);

        //tell other departments that a new part has been added
        mediator->communicate(part);
    }

    //send Car back to Team
    return car;
}

void EngineFactory::simulation(){
    cout << "The driver is using the simulator to adjust to the weight distribution of the Engine." << endl;

    //get the speed of the part
    int speed = part->calculateSpeed() % 5;

    cout << "The Engine shows a speed of " << speed << "/5" << endl;
}

void EngineFactory::otherPartChanged(DepartmentOutput* part){
    cout << "The Engine department confirms that they have received the message about the new " << part->getType() << endl;
}

string EngineFactory::getType(){
    return "Engine";
}