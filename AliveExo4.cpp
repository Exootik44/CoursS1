#include "AliveExo4.h"

Alive::Alive(){}

void Alive::setMaxHealth(float _maxHealth) {
	maxHealth = _maxHealth;
}
void Alive::setPlayerHealth(float _playerHealth) {
	playerHealth = _playerHealth;
}
float Alive::getMaxHealth() {
	return maxHealth;
}
float Alive::getPlayerHealth() {
	return playerHealth;
}
