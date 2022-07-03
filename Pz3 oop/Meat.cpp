#include "Meat2.h"

	string Meat:: GetMeatName() { return meatType; }
	void Meat:: SetMeatName(string _meatType) { meatType = _meatType; }
	string Meat::GetProzarki() { return stepProzarki; }
	void Meat::SetProzarki(string _stepProzarki) { stepProzarki = _stepProzarki; }

	string Meat:: Smell() 
	{
		string result = "Smells like meat~~~~";
		return result;
	}
