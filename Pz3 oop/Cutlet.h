#pragma once
#include "Meat.h"

class Cutlet : public Meat
{
private:
	float _weigth;	// вес котлеты, г

public:
	Cutlet();	//конструктор по умолчанию
	Cutlet(string name, time_t productionDate, int expirationTime, float energy100, string animal, float weigth); //конструктор с параметрами
	Cutlet(const Cutlet& from_cutlet); // конструктор копирования
	//геттеры сеттеры
	void set_weigth(float _weigth);
	float get_weigth();
	// перегруженные виртуальные функции
	virtual string smell() override;
	virtual string recipe() override;

	virtual void getInfo() override;
	virtual void setInfo() override;

	virtual void ToPrint() override;
};