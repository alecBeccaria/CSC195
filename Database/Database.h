#pragma once
#include "Animal.h"
#include <vector>
class Database
{
public:
	~Database();
	void Add(Animal::eType type);
	void DisplayAll();
	void Display(std::string name);
	void Display(Animal::eType);
	void Load(const std::string& filename);
	void Save(const std::string& filename);
	
	void RemoveAll();
private:
	Animal* Create(Animal::eType type);
	std::vector<Animal*> animals;
};

