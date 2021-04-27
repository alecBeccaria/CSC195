#pragma once
#include "Animal.h"
class Bird : public Animal
{
public:
	virtual eType GetType() override { return Animal::eType::Bird; }

	void Read(std::ostream& ostream, std::istream& istream) override;
	void Write(std::ostream& ostream) override;
	void Read(std::ifstream& istream) override;
	void Write(std::ofstream& ostream) override;

protected:
	int m_numEggs = 0;
};

