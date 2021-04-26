#pragma once
#include "Animal.h"
class Reptile : public Animal
{
public:
	virtual eType GetType() { return Animal::eType::Reptile; }

	void Read(std::ostream& ostream, std::istream& istream) override;
	void Write(std::ostream& ostream) override;
	void Read(std::ifstream& istream) override;
	void Write(std::ofstream& ostream) override;

protected:
	int m_numTeeth = 0;
};

