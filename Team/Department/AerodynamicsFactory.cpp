#include "Team/Department/AerodynamicsFactory.h"

AerodynamicsFactory::AerodynamicsFactory(DepartmentMediator* mediator) : DepartmentFactory(mediator){
    windTokens = 400;
}

AerodynamicsFactory::~AerodynamicsFactory(){

}

Car *AerodynamicsFactory::createPart() {
    if (part) {
        delete part;
    }

    //create new part
    part = new Aerodynamics();

    //determine if the part could be better
    //give 20% chance for part to be better,  part is not better iff (speed <= 0) -> no need to test in the windTunnel
    if (part->calculateSpeed() > 0) {
        //we know the part is better in theory, but is it better in practice -> use wind tunnel
        int windPerformance = windTunnel();

        //10% chance that has better wind performance than current part
        if(windPerformance >= 0 && windPerformance < 10){
            car->removePart("Aerodynamics");
            car->addPart(part);

            //tell other departments that a new part has been added
            mediator->communicate(part);
        }
    }

    //send Car back to Team
    return car;
}

void AerodynamicsFactory::simulation(){
    cout << "The driver is using the simulator to see the weather conditions and wind patterns predicted for the race." << endl;

    //get the speed of the part
    int speed = part->calculateSpeed() % 5;

    cout << "The Aerodynamics shows a speed of " << speed << "/5" << endl;
}

void AerodynamicsFactory::otherPartChanged(DepartmentOutput* part){
    cout << "The Aerodynamics department confirms that they have received the message about the new " << part->getType() << endl;
}

int AerodynamicsFactory::windTunnel(){
    if(windTokens == 0){
        cout << "The team is out of wind tunnel tokens for the season. They can therefore not use the tunnel anymore this season." << endl;
        return -1;
    }else{
        decreaseTunnelTokens();
        return rand() % 100;
    }
}

int AerodynamicsFactory::getTunnelTokens(){
    return windTokens;
}

void AerodynamicsFactory::decreaseTunnelTokens(){
    --windTokens;
}

string AerodynamicsFactory::getType(){
    return "Aerodynamics";
}