#pragma once

#include<string>

class Client
{
private:
	std::string FCs, Phone, Address, Country;
	int Price, Peoples, Time;
public:
	Client() { FCs = Phone = Address = Country = "Nan"; Price = Peoples = Time = 0; }

	explicit Client(std::string _FCs, std::string _phone, std::string _address, int _price, int _peoples, std::string _country, int _Time)
		: FCs(_FCs), Phone(_phone), Address(_address), Price(_price), Peoples(_peoples), Country(_country), Time(_Time)
	{}

	std::string GetFCs() const			{ return FCs; }
	std::string GetPhone()	const		{ return Phone; }
	std::string GetAddress() const		{ return Address; }
	int GetPrice() const				{ return Price; }
	int GetPeoples() const				{ return Peoples; }
	std::string GetCountry() const		{ return Country; }
	int GetTime() const					{ return Time; }

	void SetPrice(int _Price)		{ Price = _Price; }
	void SetPeoples(int _Peoples)   { Peoples = _Peoples; }
	void SetCountry(std::string _Country)   { Country = _Country; }
	void SetTime(int _Time)			{ Time = _Time; }

};

