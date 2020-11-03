#include "Team/Team.h"
#include "Season/Race.h"
#include "Season/Season.h"

int main() {

	Team** teams = new Team*[10];
	teams[0] = new Team("Mercedes", "Lewis Hamilton", "Valtteri Bottas");
	teams[1] = new Team("Red Bull", "Max Verstappen", "Alex Albon");
	teams[2] = new Team("Renault", "Daniel Ricciardo", "Esteban Ocon");
	teams[3] = new Team("McLaren", "Carlos Sainz", "Lando Norris");
	teams[4] = new Team("Racing Point", "Sergio Perez", "Lance Stroll");
	teams[5] = new Team("Ferrari", "Charles Leclerc", "Sebastian Vettel");
	teams[6] = new Team("AlphaTauri", "Pierre Gasly", "Daniil Kvyat");
	teams[7] = new Team("Alfa Romeo", "Kimi Raikkonen", "Antonio Giovinazzi");
	teams[8] = new Team("Haas", "Romain Grosjean", "Kevin Magnussen");
	teams[9] = new Team("Williams", "George Russell", "Nicolas Latifi");

	Race** races = new Race*[21];
	// length, european, date, name, avg lap time
	races[0] = new Race(67, false, 10, "Australian Grand Prix", 90);
	races[1] = new Race(67, false, 20, "Australian Grand Prix", 90);
	races[2] = new Race(67, false, 30, "Australian Grand Prix", 90);
	races[3] = new Race(67, false, 40, "Australian Grand Prix", 90);
	races[4] = new Race(67, false, 50, "Australian Grand Prix", 90);
	races[5] = new Race(67, false, 60, "Australian Grand Prix", 90);
	races[6] = new Race(67, false, 70, "Australian Grand Prix", 90);
	races[7] = new Race(67, false, 80, "Australian Grand Prix", 90);
	races[8] = new Race(67, false, 90, "Australian Grand Prix", 90);
	races[9] = new Race(67, false, 100, "Australian Grand Prix", 90);
	races[10] = new Race(67, false, 110, "Australian Grand Prix", 90);
	races[11] = new Race(67, false, 120, "Australian Grand Prix", 90);
	races[12] = new Race(67, false, 130, "Australian Grand Prix", 90);
	races[13] = new Race(67, false, 140, "Australian Grand Prix", 90);
	races[14] = new Race(67, false, 150, "Australian Grand Prix", 90);
	races[15] = new Race(67, false, 160, "Australian Grand Prix", 90);
	races[16] = new Race(67, false, 170, "Australian Grand Prix", 90);
	races[17] = new Race(67, false, 180, "Australian Grand Prix", 90);
	races[18] = new Race(67, false, 190, "Australian Grand Prix", 90);
	races[19] = new Race(67, false, 200, "Australian Grand Prix", 90);
	races[20] = new Race(67, false, 210, "Australian Grand Prix", 90);
	
	Season season(teams, 10, races, 21);

	for (int i = 0; i < 10, i++) {
		delete teams[i];
	}
	delete[] teams;
	for (int i = 0; i < 21, i++) {
		delete races[i];
	}
	delete[] races;

	return 0;
}