#ifndef RACEITERATOR_H
#define RACEITERATOR_H

#include "Season/Race.h"

using namespace std;
/**
 * @class
 * @headerfile
 */
class RaceIterator {

private:
    Race **races;/*! @var */
    int length;/*! @var */
    int current;/*! @var */
public:/**
 *
 * @param races
 * @param length
 */
    RaceIterator(Race **races, int length);

    /**
     *
     */
    ~RaceIterator();

    /**
     *
     */
    void first();

    /**
     *
     */
    void next();

    /**
     *
     * @return
     */
    bool isDone();

    /**
     *
     * @return
     */
    Race *currentItem();
};

#endif
