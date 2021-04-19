#pragma once
#include "Animal.h"
#include <iostream>
class Reptile : public Animal
{
public:
	Reptile(int numEggs)
	{
		m_numEggs = numEggs;
		std::cout << "Reptile Constructor\n";
	}
	~Reptile()
	{
		std::cout << "Reptile Destructor\n";
	}
	void Speak() override;

protected:
	int m_numEggs = 0;
};

