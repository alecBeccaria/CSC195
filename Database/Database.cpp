#include "Database.h"
#include "Bird.h"
#include "Reptile.h"
#include <iostream>
#include <fstream>


Database::~Database() {
	for (auto& animal : animals)
	{
		delete &animal;
	}
	animals.clear();
}

void Database::Add(Animal::eType type)
{
	std::unique_ptr<Animal> animal = Create(type); 
	std::cin >> *animal;
	animals.push_back(std::move(animal));
}

void Database::DisplayAll()
{
	for (auto& animal : animals)
	{
		std::cout << *animal;
	
	}
	
	
}

void Database::Display(std::string name)
{
	for (auto& animal : animals)
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
		RemoveAll();
		while (!input.eof())
		{
			int type;
			input >> type;

			std::unique_ptr<Animal> animal = Create(static_cast<Animal::eType>(type));
			input >> *animal;
			animals.push_back(std::move(animal));
			
		}
	}

}

void Database::Save(const std::string& filename)
{
	std::ofstream output(filename);
	if (output.is_open())
	{
		for (auto& animal : animals)
		{
			output << "\n" << static_cast<int>(animal->GetType()) << std::endl;
			output << *animal;
		}
	}
}

void Database::Remove(const std::string& name)
{
	for (auto iter = animals.begin(); iter != animals.end();)
	{
		iter = std::find(iter, animals.end(), name);
		if (iter != animals.end())
		{
			iter = animals.erase(iter);
		}
	}
}

void Database::Remove(Animal::eType type)
{
	for (auto iter = animals.begin(); iter != animals.end();)
	{
		iter = std::find(iter, animals.end(), type);
		if (iter != animals.end())
		{
			iter = animals.erase(iter);
		}
	}
}

std::unique_ptr<Animal> Database::Create(Animal::eType type)
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
	return std::unique_ptr<Animal>{animal};
}

void Database::RemoveAll()
{
	animals.clear();
}
