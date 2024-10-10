#include "EntityExo2.h"

//void EntityExo2::Vector2DeEntity(float _x, float _y)
//{
//
//}
//// SETTER
//void Vector2::setValueX(float _x) {
//	x = _x;
//}
//void Vector2::setValueY(float _y) {
//	y = _y;
//}
//
//// GETTER
//float Vector2::getValueX() {
//	return x;
//}
//float Vector2::getValueY() {
//	return y;
//}

//Constructeur
EntityExo2::EntityExo2(const Vector2& _position) : position(_position) {}

//Constructeur
EntityExo2::EntityExo2(float x, float y) : position(x, y) {}

// Getter
Vector2 EntityExo2::getPosition() const {
    return position;
}

// Setter
void EntityExo2::setPosition(const Vector2& newPos) {
    position = newPos;
}