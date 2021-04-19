#include "Bird.h"
#include "Reptile.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> numbers;
	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_back(4);
	//Animal animal;
	//animal.Speak();
	vector<Animal*> animals;
	animals.push_back(new Bird(12, 14.0f));
	animals.push_back(new Bird(10, 20.0f));
	animals.push_back(new Reptile(5));

	for (Animal* animal : animals)
	{
		animal->Speak();
	}

	for (Animal* animal : animals)
	{
		delete animal;
	}
	
	Bird bird(12, 10.0f);
	bird.Speak();

	Reptile lizard(5);
	lizard.Speak();
}