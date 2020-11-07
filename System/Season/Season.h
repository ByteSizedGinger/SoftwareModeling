#ifndef SEASON_H
#define SEASON_H

//colours for output
#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"

#include "Team/Team.h"
#include "Season/Race.h"
#include "Season/RaceIterator.h"
#include <string>

using namespace std;
/**
 * @class 
 * @headerfile
 */
class Season {

private:
    static Season *singleton;/*! @var */
    Team **teams;/*! @var */
    int numTeams;/*! @var */
    Race **races;/*! @var */
    int numRaces;/*! @var */
    /**
     *
     */
    Season();

    /**
     *
     */
    void orderTyres();

    /**
     *
     * @return
     */
    Car **getCars();

    /**
     *
     */
    void displayConstructorsStandings();

    /**
     *
     */
    void displayDriversStandings();

    /**
     *
     * @param european
     */
    void transport(bool european);

    /**
     *
     * @return
     */
    RaceIterator *createIterator();

    /**
     *
     */
    void upgradeAndSimulate(bool nextSeason);

    /**
     *
     */
    void updateTeamPoints();

public:
    /**
     *
     * @return
     */
    static Season instance();

    /**
     *
     */
    ~Season();

    /**
     *
     * @param teamName
     * @param driver1
     * @param driver2
     */
    void addTeam(string teamName, string driver1, string driver2);

    /**
     *
     * @param length
     * @param european
     * @param date
     * @param name
     * @param averageLapTime
     */
    void addRace(int length, bool european, int date, string name, int averageLapTime);

    /**
     *
     */
    void runSeason();
};

#endif
