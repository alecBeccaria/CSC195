#include "Bird.h"
#include <iostream>

void Bird::Read(std::ostream& ostream, std::istream& istream)
{
	Animal::Read(ostream, istream);

	ostream << "Enter Num of Eggs: ";
	istream >> m_lifespan;
}

void Bird::Write(std::ostream& ostream)
{
	Animal::Write(ostream);
	ostream << "Number of Eggs: " << m_numEggs << std::endl;
}
