#ifndef AMOVABLE_H__
#define AMOVABLE_H__

#include "Vector2.h"

class AMovable {
protected:
	Vector2 position;
	Vector2 direction;
	float vitesse;
public:
	AMovable();

	virtual void setDirection(Vector2 _direction);
	virtual void setVitesse(float _vitesse);

	virtual void move() = 0;


};


#endif // !AMovable_H__

