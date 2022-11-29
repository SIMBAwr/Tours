#pragma once

#include "OutputConsole.h"
#include <fstream>

void OutputFileFunc(const Client& _Client, const std::vector<Tours>& _Tours, std::ofstream& _OutputFile)
{

	for (size_t i = 0; i < _Tours.size(); i++)
	{
		if (_Client.GetCountry() == _Tours[i].Country || _Client.GetCountry() == "Nan")
		{
			if (_Client.GetPrice() < _Tours[i].Price || _Client.GetPrice() == 0)
			{
				if (_Client.GetPeoples() == _Tours[i].Peoples || _Client.GetPeoples() == 0)
				{
					if (_Client.GetTime() == _Tours[i].Time || _Client.GetTime() == 0)
					{
						_OutputFile << "Страна: "					 << _Tours[i].Country << std::endl;
						_OutputFile << "Цена: "						 << _Tours[i].Price << std::endl;
						_OutputFile << "Кол-во людей: "				 << _Tours[i].Peoples << std::endl;
						_OutputFile << "Продолжительность поездки: " << _Tours[i].Time << std::endl;
						_OutputFile << "\n\n";
					}
				}
			}
		}
		_OutputFile << "\n\n";
	}
}