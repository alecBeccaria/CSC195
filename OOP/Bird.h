#pragma once
#include "Animal.h"
#include <iostream>
class Bird : public Animal
{
public:
	Bird(int lifespan, float speed) : Animal(lifespan)
	{
		m_flightSpeed = speed;
		std::cout << "Bird Constructor\n";
	}
	~Bird()
	{
		std::cout << "Bird Destructor\n";
	}
	void Speak() override;

protected:
	float m_flightSpeed = 0.0f;
};

