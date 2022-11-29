#pragma once

#include "ChangeTheRequirement.h"
#include "Client.h"
#include "Tours.h"
#include <vector>


void OutputConsole(const Client& _Client, const std::vector<Tours> _Tours)
{
	for (size_t i = 0; i < _Tours.size(); i++)
	{
		if (_Client.GetCountry() == _Tours[i].Country || _Client.GetCountry() =="Nan")
		{
			if (_Client.GetPrice() > _Tours[i].Price || _Client.GetPrice() == 0)
			{
				if (_Client.GetPeoples() == _Tours[i].Peoples || _Client.GetPeoples() == 0)
				{
					if (_Client.GetTime() == _Tours[i].Time || _Client.GetTime() == 0)
					{
						std::cout << "Страна: "						<< _Tours[i].Country << std::endl;
						std::cout << "Цена: "						<< _Tours[i].Price << std::endl;
						std::cout << "Кол-во людей: "				<< _Tours[i].Peoples << std::endl;
						std::cout << "Продолжительность поездки: "  << _Tours[i].Time << std::endl;
						std::cout << "\n\n";
					}
				}
			}
		}
		std::cout << "\n\n";
	}
}
