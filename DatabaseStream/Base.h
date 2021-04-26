#pragma once
#include <iostream>
#include <fstream>
class Base
{
	virtual void Read(std::ifstream& istream);
	virtual void Write(std::ofstream& ostream);
};

