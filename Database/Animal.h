#pragma once
#include <istream>
#include <string>
#include <fstream>

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

	friend std::istream& operator >> (std::istream& istream, Animal& animal);
	friend std::ostream& operator << (std::ostream& ostream, Animal& animal);

	friend std::ifstream& operator >> (std::ifstream& istream, Animal& animal);
	friend std::ofstream& operator << (std::ofstream& ostream, Animal& animal);

protected:
	std::string m_name;
	int m_lifespan = 0;
};

