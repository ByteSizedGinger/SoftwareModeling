#ifndef NEXTSEASON_H
#define NEXTSEASON_H

#include "Car/Car.h"

using namespace std;

class NextSeason: public Car {
	public:
		NextSeason();
		NextSeason* clone();
};

#endif