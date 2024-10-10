#ifndef VECTOR2_H__
#define VECTOR2_H__

#include <string>

class Vector2 {
	float x;
	float y;

public : 
	Vector2();
	Vector2(float _x, float _y);

	float getValueX() const;
	float getValueY() const;

	void setValueX(float _x);
	void setValueX(std::string _xStr);

	void setValueY(float _y);

	Vector2 operator+(const Vector2& _rigth);
};


#endif 