#pragma once
#include "Meat.h"

class Cutlet : public Meat
{
private:
	float _weigth;	// вес котлеты, г

public:
	Cutlet();
	Cutlet(string name, time_t productionDate, int expirationTime, float energy100, string animal, float weigth);
	Cutlet(const Cutlet& from_cutlet);

	void set_weigth(float _weigth);
	float get_weigth();

	virtual string smell() override;
	virtual string recipe() override;

	virtual void getInfo() override;
	virtual void setInfo() override;

	virtual void ToPrint() override;
};