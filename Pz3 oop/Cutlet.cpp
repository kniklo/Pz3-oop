#include "Cutlet.h"

	string Cutlet:: GetCutletName() { return cutletType; }
	void Cutlet::  SetCutletName(string _cutletType) { cutletType = _cutletType; }

	string Cutlet:: Smell() 
	{
		string result =  "Smells like cutlet~~~~";
		return result;
	}
