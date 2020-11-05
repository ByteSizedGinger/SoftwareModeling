#ifndef BOX_H
#define BOX_H

#include <string>
#include <list>
#include "Team/Transport/Container/Container.h"

using namespace std;

class Box : public Container
{
	private:
		list<Container*> containers;
	public:
		Box();
		~Box();
		void add(Container* item);
		void print();
};

#endif
