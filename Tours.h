#pragma once

#include<string>

class Tours
{
public:
	std::string  Country;
	int Price, Peoples, Time;
	Tours() { Country = "Nan"; Price = Peoples = Time = 0; }

	explicit Tours(std::string _country, int _price, int _peoples, int _Time)
		: Country(_country), Price(_price), Peoples(_peoples), Time(_Time)
	{}


	void SetPrice(int _Price) { Price = _Price; }
	void SetPeoples(int _Peoples) { Peoples = _Peoples; }
	void SetCountry(std::string _Country) { Country = _Country; }
	void SetTime(int _Time) { Time = _Time; }

	//bool operator<(const Tours& obj_1)
	//{ 
	//	return this->Country < obj_1.Country; 
	//}

	//bool operator < (const Tours& obj_1)
	//{
	//	return this->Price < obj_1.Price;
	//}


};

