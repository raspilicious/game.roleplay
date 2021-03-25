// game.roleplay() v0.2
// by Aaron Goss
// https://bit.ly/3vVu8kn

#include "game.h"

int main()
{
    Game game;

    while (game.roleplaying) {
        game.roleplay();
    }
}