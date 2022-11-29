#pragma once

#include <iostream>
#include <fstream>
#include "Tours.h"
#include <vector>

void ReadFile(std::vector<Tours>& _VectorTours )
{
	std::ifstream File("C:\\Users\\Даниил\\Desktop\\Tours_2.txt");
	
	int counter = 0, counter_seekg = 0;

	while (!File.eof())
	{
		Tours temp;
		_VectorTours.push_back(temp);
	
			File >> _VectorTours[counter].Country; // как по слову считывать из файла
	
			File >> _VectorTours[counter].Price;
	
			File >> _VectorTours[counter].Peoples;

			File >> _VectorTours[counter].Time;

			bool x = !File.eof();

		counter++;
	}
	File.close();
}