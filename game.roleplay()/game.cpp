#include "game.h"

Game::Game() {
	act = "";
	roleplaying = true;
}

Game::~Game() { }

void Game::roleplay() {
	cout << "Hi! What would you like to do? ";
	getline(cin, act);
	cout << "You " << act << ". Nice!" << endl << endl;
	if (act == "quit") roleplaying = false;
}