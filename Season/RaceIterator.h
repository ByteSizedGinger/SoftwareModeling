#ifndef RACEITERATOR_H
#define RACEITERATOR_H

#include "Season/Race.h"

using namespace std;

class RaceIterator {

	private:
		Race** races;
		int length;
		int current;
	public:
		RaceIterator(Race** races, int length);
		~RaceIterator();
		void first();
		void next();
		bool isDone();
		Race* currentItem();
};

#endif
