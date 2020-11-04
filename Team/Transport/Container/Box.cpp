#include <string>
#include <iostream>
#include <list>
#include "Team/Transport/Container/Box.h"

using namespace std;

Box::Box() : Container(){
  this.setIsBox(true);
}

Box::~Box(){
  //empty list and then delte the list
  containers.clear();
  delete containers;
}

void Box::add(Container * item){
  containers.push_front(item);
}

void Box::print(){
  cout<<"This box contains:\n";
  for(list<Container*>::iterator i=containers.begin(); i!=containers.end(); ++i){
    (*i)->print();
  }
}
