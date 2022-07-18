#pragma once
#include "Food.h"
#include <ctime>

class Bread : public Food
{
private:
	string _type;	// тип хлеба	

public:
	Bread();	
	Bread(string name, time_t productionDate, int expirationTime, float energy100, string type);	
	Bread(const Bread& from_bread);
	
	void set_type(string _type);
	string get_type();

	virtual string smell() override;
	virtual string recipe() override;
	
	virtual void getInfo() override;
	virtual void setInfo() override;

	virtual void ToPrint() override;
};