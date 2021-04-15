
#include "Employee.h"
#include <iostream>
const float Employee::TAX = 0.01f;
void Employee::Read()
{
	totalHours = 0;
	std::cout << "Enter first name: ";
	std::cin >> name;
	std::cout << "Enter age: ";
	std::cin >> age;
	std::cout << "Enter zipcode: ";
	std::cin >> zipcode;
	std::cout << "Enter wage: ";
	std::cin >> wage;
	std::cout << "Enter # of days worked: ";
	std::cin >> daysWorked;

	for (int i = 0; i < daysWorked; i++)
	{
		std::cout << "Enter hours worked for day " << i+1 << ": ";
		std::cin >> hoursWorkedPerDay[i];

		totalHours += hoursWorkedPerDay[i];
		
	}
	gross = totalHours * wage;
	net = gross - (gross * TAX);

};

void Employee::Write()
{
	std::cout << "\n" << name << "\n";
	std::cout << "Age: " << age << "\n";
	std::cout << "Zipcode: " << zipcode << "\n";
	std::cout << "Wage: $" << wage << "\n";
	std::cout << "Gross Income: " << gross << "\n";
	std::cout << "Net Income: " << net << "\n";
};
