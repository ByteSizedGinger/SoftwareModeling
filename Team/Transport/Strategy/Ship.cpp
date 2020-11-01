#include <string>
#include <iostream>
#include "Team/Transport/Strategy/Ship.h"

using namespace std;

Ship::Ship(){

}

void Ship::transport(Container * container){
  container->print();
}
