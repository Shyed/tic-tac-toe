#include "Player.h"

void Player::won() { score++; } //increment score

int Player::getScore() { return this->score; }

string Player::getName() { return this->name; }
