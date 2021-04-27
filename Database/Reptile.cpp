#include "Reptile.h"
#include <iostream>
#include <fstream>


void Reptile::Read(std::ostream& ostream, std::istream& istream)
{
	Animal::Read(ostream, istream);

	ostream << "Enter Num of Teeth: ";
	istream >> m_numTeeth;
}

void Reptile::Write(std::ostream& ostream)
{
	Animal::Write(ostream);
	ostream << "Number of Teeth: " << m_numTeeth << std::endl;
}

void Reptile::Read(std::ifstream& istream)
{
	Animal::Read(istream);
	istream >> m_numTeeth;
}

void Reptile::Write(std::ofstream& ostream)
{
	Animal::Write(ostream);
	ostream << m_numTeeth;
}
