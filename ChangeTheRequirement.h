#pragma once

#include "FuncMenu.h"

enum { Price = 1, Country, Peoples, Time };

void ChangeRequirement(int SelectedChange, Client& Client_1)
{
	switch (SelectedChange)
	{
	case Price:
	{
		int price;
		std::cout << "������� ������������ ����:\n";
		std::cin >> price;
		Client_1.SetPrice(price);
		break;
	}

	case Country:
	{
		std::string country;
		std::cout << "������� ������:\n";
		std::cin >> country;
		Client_1.SetCountry(country);
		break;
	}

	case Peoples:
	{
		int peoples;
		std::cout << "������� ���������� �����:\n";
		std::cin >> peoples;
		Client_1.SetPeoples(peoples);
		break;
	}

	case Time:
	{
		int time;
		std::cout << "������� ������������ �����:\n";
		std::cin >> time;
		Client_1.SetTime(time);
		break;
	}

	}


}
