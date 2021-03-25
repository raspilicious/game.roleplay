// game.roleplay() v0.3
// by Aaron Goss
// https://bit.ly/3vVu8kn

#include "game.h"

int main() {
    Game game;

    while (game.roleplaying) {
        game.roleplay();
    }
}