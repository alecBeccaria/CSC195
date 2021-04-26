#pragma once
#include <string>

class Animal
{
public:
	enum class eType
	{
		Bird = 1,
		Reptile
	};
public:
	std::string GetName() { return m_name; }
	virtual eType GetType() = 0;

	virtual void Read(std::ostream& ostream, std::istream& istream);
	virtual void Write(std::ostream& ostream);
	virtual void Read(std::ifstream& istream);
	virtual void Write(std::ofstream& ostream);

protected:
	std::string m_name;
	int m_lifespan = 0;
};

