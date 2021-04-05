#include <iostream>
using namespace std;
const float TAX = 0.1f;
string name;
char initial;
unsigned short age;
bool isAdult;
unsigned int zipcode;
float wage;
unsigned short daysWorked;
float hoursWorkedPerDay[7];



int main()
{
	cout << "Enter First Name: ";
	cin >> name;
	cout << "Enter Last Initial: ";
	cin >> initial;
	cout << "Enter Age";
	cin >> age;
	cout << "Enter Zipcode";
	cin >> zipcode;

	if (age > 17)
	{
		isAdult = true;
	}

	for (int i = 0; i < 6; i++)
	{
		cout << "Enter Hours worked for day " << daysWorked << ": ";
		cin >> hoursWorkedPerDay[i];
	}

	for (int i = 0; i < 6; i++)
	{
		hoursWorkedPerDay[i]
	}
}