#include <string>
#include "Team/Transport/Container/Container.h"
#include <iostream>

using namespace std;

Container::Container(){
  isBox=false;
}

Container::~Container(){
  isBox=NULL;
}

void Container::print(){
  cout<<isBox.toString();
}

void Container::setIsBox(bool b){
  isBox=b;
}

bool Container::getIsBox(){
  return isBox;
}
