#include "Vector.h"
#include <iostream>

int main()
{
	nc::vector<int> numbers(5);
	numbers.push_back(5);
	numbers.push_back(50);
	numbers.pop_back();
	numbers.pop_back();
	numbers.push_back(134);
	numbers.push_back(3);
	

	for (size_t i = 0; i < numbers.size(); i++)
	{
		std::cout << numbers[i] << std::endl;
	}
}