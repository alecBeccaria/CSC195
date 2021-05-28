#include <iostream>
#include <vector>
#include <assert.h>

int cube(int v)
{
	return (v * v * v);
}

int sqr(int v)
{
	return (v * v);

}

int divide(int a, int b)
{
	if (b == 0) throw std::invalid_argument("Divide by Zero Error");
	return  a / b;
}

class A {};

int main()
{
	int i = 3;
	i = cube(i);
	std::cout << i << std::endl;

	//assert
	assert(i == 27);
	int* p = &i;
	assert(p);

	//exception handling

	try
	{
		i = divide(i, 2);
		std::vector<int> n{ 1, 2, 3 };
		//n[2];
		//n.at(3);
		//int j = n.at(3);
	}
	catch (std::invalid_argument& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	catch (std::out_of_range& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	catch (std::exception& ex)
	{
		std::cout << "Exception: " << ex.what() << std::endl;
	}
	std::cout << "continue\n";
}