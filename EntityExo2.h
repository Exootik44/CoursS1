#ifndef ENTITYEXO2_H__
#define ENTITYEXO2_H__

#include "Vector2.h"

class EntityExo2 {
protected:
	Vector2 position;
private:

	//float x;
	//float y;

public: 
	EntityExo2(const Vector2& _position);
	EntityExo2(float x, float y);

	virtual Vector2 getPosition() const;
	virtual void setPosition(const Vector2& newPos);

};




#endif // !ENTITYEXO2_H__

