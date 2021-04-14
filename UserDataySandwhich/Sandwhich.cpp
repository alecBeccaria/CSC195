#include "Sandwhich.h"
#include <iostream>

const float Sandwhich::TAX = 0.01f;

void Sandwhich::Read()
{
	std::cout << "name: ";
	std::cin >> name;
};

void Sandwhich::Write()
{
	std::cout << "name = " << name << std::e;
};