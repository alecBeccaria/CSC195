#include "Database.h"
#include "Bird.h"
#include "Reptile.h"
#include <iostream>
#include <fstream>


Database::~Database() {
	for (Animal* animal : animals)
	{
		delete animal;
	}
	animals.clear();
}

void Database::Add(Animal::eType type)
{
	Animal* animal = Create(type); 
	std::cin >> *animal;
	animals.push_back(animal);
}

void Database::DisplayAll()
{
	for (Animal * animal : animals)
	{
		std::cout << *animal;
	
	}
	
	
}

void Database::Display(std::string name)
{
	for (Animal* animal : animals)
	{
		if (name == animal->GetName())
		{
			std::cout << *animal;
		}

	}

}

void Database::Display(Animal::eType)
{
}

void Database::Load(const std::string& filename)
{
	std::ifstream input(filename);

	if (input.is_open())
	{
		//RemoveAll();
		while (!input.eof())
		{
			int type;
			input >> type;

			Animal* animal = Create(static_cast<Animal::eType>(type));
			input >> *animal;
			animals.push_back(animal);
			
		}
	}

}

void Database::Save(const std::string& filename)
{
	std::ofstream output(filename);
	if (output.is_open())
	{
		for (Animal* animal : animals)
		{
			output << static_cast<int>(animal->GetType()) << std::endl;
			output << *animal;
		}
	}
}

Animal* Database::Create(Animal::eType type)
{
	Animal* animal = nullptr;
	switch (type)
	{
	case Animal::eType::Bird:
		animal = new Bird;
		break;
	case Animal::eType::Reptile:
		animal = new Reptile;
		break;
	default:
		break;
	}
	return animal;
}

void Database::RemoveAll()
{
	for (Animal* animal : animals)
	{
		delete animal;
	}
	animals.clear();
}
