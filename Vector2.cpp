#include "Vector2.h"

Vector2::Vector2() : x(0.f), y(0.f) {

}

Vector2::Vector2(float _x, float _y) : x(_x), y(_y)
{

}

// GETTER
float Vector2::getValueX() const {
	return x;
}
float Vector2::getValueY() const {
	return y;
}

// SETTER
void Vector2::setValueX(float _x) {
	x = _x;
}
void Vector2::setValueX(std::string _xStr) {
	x = std::stof(_xStr);
}
void Vector2::setValueY(float _y) {
	y = _y;
}

Vector2 Vector2::operator+(const Vector2& _rigth) {
	return Vector2(x + _rigth.x, y + _rigth.y);
	Vector2 tmp(x + _rigth.getValueX(), y + _rigth.getValueY());
	return tmp;
}

