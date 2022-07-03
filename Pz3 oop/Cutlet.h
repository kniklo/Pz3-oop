#pragma once
#include "Meat2.h"

class Cutlet : public Meat
{
private:
	string cutletType;
public:
	Cutlet() : cutletType("")
	{
	}
	Cutlet(string _name, string prTime, string expDate, string _flour, string _meatType, string _stepProzarki, string _cutletType) : Meat( _name,  prTime,  expDate,  _flour,  _meatType,  _stepProzarki)
	{
		cutletType = _cutletType;
	}
	Cutlet(const Cutlet& from_cutlet) : cutletType(from_cutlet.cutletType)
	{
	}
	string GetCutletName();
	void SetCutletName(string _cutletType);

	string Smell()override; 
};