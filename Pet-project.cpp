#include "Client.h"
#include "RemoveLineFile.h" //сюда входит <iostream>, "FuncMenu", "OutputConsole.h" и "OutputToTheFile.h"
#include "ReadFile.h" //сюда входит "Tours.h" и <vector>
#include <algorithm>

enum MyEnum
{
	ChangeTheRequirement = 1,
	OutputToTheConsole, SortCountry,
	SortPrice, OutputToTheFile, DeletePurchased, STOP
};


int main()
{
	setlocale(LC_ALL, "ru");

	int choise;

	std::vector<Tours> VectorTours;

	ReadFile(VectorTours);

	Client Client_1;

	do
	{	
		system("pause");
		system("cls");
		FuncMenu();
		std::cin >> choise;

		switch (choise)
		{
		case ChangeTheRequirement:
		{
			int ChoiseChange;
			std::cout << "1 - Изменить максимальную цену\n";
			std::cout << "2 - Изменить желаемую страну\n";
			std::cout << "3 - Изменить количество людей\n";
			std::cout << "4 - Изменить время проживания\n";
			std::cout << "Ваш выбор: ";
			std::cin >> ChoiseChange;

			ChangeRequirement(ChoiseChange, Client_1);

			break;
		}

		case OutputToTheConsole:     // работает исправно 
		{
			std::cout << "Возможные путёвки:\n\n ";
			OutputConsole(Client_1, VectorTours); 
			break;
		}

		case SortCountry: //сортирует, но пока непонятно как, нужно дольше данных
		{
			for (size_t i = 0; i < VectorTours.size(); i++)
				for (size_t j = 0 + i; j < VectorTours.size(); j++)
					if (VectorTours[i].Country > VectorTours[j].Country)
						std::swap(VectorTours[i], VectorTours[j]);
			break;
		}

		case SortPrice:   //Работает исправно
		{
			for (size_t i = 0; i < VectorTours.size(); i++)
				for (size_t j = 0 + i; j < VectorTours.size(); j++)
					if (VectorTours[i].Price > VectorTours[j].Price)
						std::swap(VectorTours[i], VectorTours[j]);
			break;
		}

		case OutputToTheFile:   //работает исправно, но нужно вводить полдный путь файла с двойным слешем
		{
			std::string NameFile;
			std::cout << "Введите имя файла для вывода подходящих путёвок: ";
			std::cin >> NameFile;

			std::ofstream OutputFile_;
			OutputFile_.open(NameFile);

			OutputFileFunc(Client_1, VectorTours, OutputFile_);

			OutputFile_.close();

			break;
		}

		case DeletePurchased:    //Работает исправно
		{
			int index;
			std::cout << "Номер купленной путёвки: "; 
			std::cin >> index;

			remove_line(index, "C:\\Users\\Даниил\\Desktop\\Tours_2.txt");
			std::cout << index << " путёвка удалена\n";

			break;
		}

		case STOP:   // работает исправно 
		{
			choise = 7;
			break;
		}
		}
	} while (choise != 7);

	return 0;
}

