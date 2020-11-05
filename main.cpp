#include "Season/Season.h"

int main() {

	Season season = Season::instance();//(teams, 10, races, 21);

	season.addTeam("Mercedes", "Lewis Hamilton", "Valtteri Bottas");
	season.addTeam("Red Bull", "Max Verstappen", "Alex Albon");
	season.addTeam("Renault", "Daniel Ricciardo", "Esteban Ocon");
	season.addTeam("McLaren", "Carlos Sainz", "Lando Norris");
	season.addTeam("Racing Point", "Sergio Perez", "Lance Stroll");
	season.addTeam("Ferrari", "Charles Leclerc", "Sebastian Vettel");
	season.addTeam("AlphaTauri", "Pierre Gasly", "Daniil Kvyat");
	season.addTeam("Alfa Romeo", "Kimi Raikkonen", "Antonio Giovinazzi");
	season.addTeam("Haas", "Romain Grosjean", "Kevin Magnussen");
	season.addTeam("Williams", "George Russell", "Nicholas Latifi");

	// length, european, date, name, avg lap time
	season.addRace(67, false, 10, "Australian Grand Prix", 90);
	season.addRace(67, false, 20, "Australian Grand Prix", 90);
	season.addRace(67, false, 30, "Australian Grand Prix", 90);
	season.addRace(67, false, 40, "Australian Grand Prix", 90);
	season.addRace(67, false, 50, "Australian Grand Prix", 90);
	season.addRace(67, false, 60, "Australian Grand Prix", 90);
	season.addRace(67, false, 70, "Australian Grand Prix", 90);
	season.addRace(67, false, 80, "Australian Grand Prix", 90);
	season.addRace(67, false, 90, "Australian Grand Prix", 90);
	season.addRace(67, false, 100, "Australian Grand Prix", 90);
	season.addRace(67, false, 110, "Australian Grand Prix", 90);
	season.addRace(67, false, 120, "Australian Grand Prix", 90);
	season.addRace(67, false, 130, "Australian Grand Prix", 90);
	season.addRace(67, false, 140, "Australian Grand Prix", 90);
	season.addRace(67, false, 150, "Australian Grand Prix", 90);
	season.addRace(67, false, 160, "Australian Grand Prix", 90);
	season.addRace(67, false, 170, "Australian Grand Prix", 90);
	season.addRace(67, false, 180, "Australian Grand Prix", 90);
	season.addRace(67, false, 190, "Australian Grand Prix", 90);
	season.addRace(67, false, 200, "Australian Grand Prix", 90);
	season.addRace(67, false, 210, "Australian Grand Prix", 90);

	season.runSeason();

	return 0;
}