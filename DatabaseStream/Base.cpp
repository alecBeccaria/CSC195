#include "Base.h"

void Base::Read(std::ifstream& istream)
{
	istream >> m_name;
}

void Base::Write(std::ofstream& ostream)
{
}
