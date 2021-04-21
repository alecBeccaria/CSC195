#include "Database.h"
#include "Bird.h"
#include <iostream>


Database::~Database() {
	for (Animal* animal : animals)
	{
		delete animal;
	}
	animals.clear();
}

void Database::Create(Animal::eType type)
{
	
	Animal* animal = nullptr;

	switch (type) {
	case Animal::eType::Bird:
		animal = new Bird;
		break;
	case Animal::eType::Mammal:
		break;
	default:
		break;
	}

	animal->Read(std::cout, std::cin);
	animals.push_back(animal);
}

void Database::DisplayAll()
{
	for (Animal * animal : animals)
	{
		animal->Write(std::cout);
	
	}
	
	
}

void Database::Display(std::string name)
{
	for (Animal* animal : animals)
	{
		if (name == animal->GetName())
		{
			animal->Write(std::cout);
		}

	}

}

void Database::Display(Animal::eType)
{
}
