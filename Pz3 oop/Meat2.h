#pragma once
#include "Food.h"

class Meat : public Food
{
private:
	string meatType;
	string stepProzarki;

public:
	Meat() : meatType(""), stepProzarki("")
	{
	}
	Meat(string _name, string prTime, string expDate, string _flour, string _meatType, string _stepProzarki) : Food(_name, prTime, expDate)
	{
		meatType = _meatType;
		stepProzarki = _stepProzarki;
	}
	Meat(const Meat& from_meat) : meatType(from_meat.meatType), stepProzarki(from_meat.stepProzarki)
	{
	}
	string GetMeatName();
	void SetMeatName(string _meatType);
	string GetProzarki();
	void SetProzarki(string _stepProzarki);
	string Smell() override;
};