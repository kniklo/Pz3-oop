#pragma once
#include "Food.h"

class Bread : public Food
{
private:
	string flour;

public:
	Bread() : flour("")
	{
	}
	Bread(string _name, string prTime, string expDate, string _flour) : Food( _name, prTime, expDate)
	{
		flour = _flour;
	}
	Bread(const Bread& from_bread) : flour(from_bread.flour)
	{
	}
	string GetBreadName();
	void SetBreadName(string _flour);

	string Smell() override;
	string cut() override;
	
	friend ostream& operator<< (ostream& out, const Bread& breadt);
	friend istream& operator>> (istream& in, Bread& bread);
};