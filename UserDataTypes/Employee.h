#pragma once
class Employee
{
private:
	char name[32];
	unsigned short age;
	unsigned int zipcode;
	float wage;
	unsigned short daysWorked;
	unsigned short hoursWorkedPerDay[7];
	static const float TAX;
	unsigned short totalHours;
	float gross;
	float net;

	
public:
	void Read();
	void Write();

};
