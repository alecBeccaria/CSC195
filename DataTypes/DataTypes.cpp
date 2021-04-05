#include <iostream>
using namespace std;
const float TAX = 0.1f;
string name;
char initial;
unsigned short age;
bool isAdult;
unsigned int zipcode;
float wage;
unsigned short daysWorked = 1;
float hoursWorkedPerDay[7];
short totalHours = 0;
float grossIncome;
float netIncome;



int main()
{
	cout << "Enter First Name: ";
	cin >> name;
	cout << "Enter Last Initial: ";
	cin >> initial;
	cout << "Enter Age: ";
	cin >> age;
	cout << "Enter Zipcode: ";
	cin >> zipcode;
	cout << "Enter Wage: ";
	cin >> wage;

	if (age > 17)
	{
		isAdult = true;
	}

	for (int i = 0; i < 7; i++)
	{
		cout << "Enter Hours worked for day " << daysWorked << ": ";
		cin >> hoursWorkedPerDay[i];
		daysWorked++;
	}

	for (int i = 0; i < 7; i++)
	{
		totalHours += hoursWorkedPerDay[i];
	}

	grossIncome = totalHours * wage;
	netIncome = grossIncome - (grossIncome * TAX);

	cout << name << " worked " << totalHours << " hours at " << wage 
		<< " an hour.\n";
	cout << "Gross Income: $" << grossIncome << "\n";
	cout << "Net Income: $" << netIncome;

}