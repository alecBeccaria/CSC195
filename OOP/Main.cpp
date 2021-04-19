#include "Bird.h"
#include "Reptile.h"
#include <iostream>


using namespace std;

int main()
{
	//Animal animal;
	//animal.Speak();
	
	Bird bird(12, 10.0f);
	bird.Speak();

	Reptile lizard(5);
	lizard.Speak();
}