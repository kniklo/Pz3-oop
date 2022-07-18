#pragma once
#include "Food.h"
#include <ctime>

class Meat : public Food
{
protected:
	string _animal;	// животное, из которого мясо	

public:
	Meat();
	Meat(string name, time_t productionDate, int expirationTime, float energy100, string type);
	Meat(const Meat& from_meat);

	void set_animal(string _animal);
	string get_animal();

	virtual string smell() override;
	virtual string recipe() override;

	virtual void getInfo() override;
	virtual void setInfo() override;

	virtual void ToPrint() override;
};