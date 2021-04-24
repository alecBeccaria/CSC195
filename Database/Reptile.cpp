#include "Reptile.h"
#include <iostream>

void Reptile::Read(std::ostream& ostream, std::istream& istream)
{
	Animal::Read(ostream, istream);

	ostream << "Enter Num of Teeth: ";
	istream >> m_numTeeth;
}

void Reptile ::Write(std::ostream& ostream)
{
	Animal::Write(ostream);
	ostream << "Number of Teeth: " << m_numTeeth << std::endl;
}
