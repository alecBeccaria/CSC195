#include <iostream>
#include "Database.h"

int main()
{
	Database database;
	bool quit = false;
	while (!quit)
	{
		std::cout << "1) Create\n";
		std::cout << "2) Display All\n";
		std::cout << "3) Display Name\n";
		std::cout << "4) Display Type\n";
		std::cout << "5) Quit\n\n";

		std::cout << "Enter Selection: ";
		int selection;
		std::cin >> selection;

		switch (selection)
		{
		case 1:
		{
			std::cout << "1) Bird\n";
			std::cout << "2) Reptile\n";
			int type;
			std::cin >> type;
			database.Create(static_cast<Animal::eType>(type));
			break;
		}
		case 2:
			database.DisplayAll();
			break;
		case 3:
		{
			std::cout << "Enter Name: ";
			std::string name;
			std::cin >> name;
			database.Display(name);
		}
			break;
		case 4:
		{
			std::cout << "1) Bird\n";
			std::cout << "2) Reptile\n";
			int type;
			std::cin >> type;
			database.Display(static_cast<Animal::eType>(type));
		}
			break;
		case 5:
			quit = true;
			break;
		default:
			break;
		}
	}
}