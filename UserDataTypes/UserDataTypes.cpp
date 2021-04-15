
#include <iostream>
#include "Employee.h"
using namespace std;
static const float TAX = 0.1f;

int main()
{
	Employee employees[5];
	unsigned short numEmployees;
	cout << "Number of Employees: ";
	cin >> numEmployees;

	for (int i = 0; i < numEmployees; i++)
	{
		employees[i].Read();
		
	}
	
	for (int i = 0; i < numEmployees; i++)
	{
		employees[i].Write();
	}
}

