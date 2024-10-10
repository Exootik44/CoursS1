#ifndef ALIVE_H__
#define ALIVE_H__

class Alive {
	float maxHealth;
	float playerHealth;

public:
	Alive();

	void setMaxHealth(float _maxHealth);
	void setPlayerHealth(float _playerHealth);

	virtual float getMaxHealth();
	virtual float getPlayerHealth();
};



#endif // !ALIVE_H__

