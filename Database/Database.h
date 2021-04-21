#pragma once
#include "Animal.h"
#include <vector>
class Database
{
public:
	~Database();

	void Create(Animal::eType type);
	void DisplayAll();
	void Display(std::string name);
	void Display(Animal::eType);
private:
	std::vector<Animal*> animals;
};

