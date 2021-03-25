#pragma once
#include <iostream>
#include <string>
using namespace std;

class Game {
public:
	Game();
	virtual ~Game();
	void roleplay();
	bool roleplaying;
private:
	string act;
};