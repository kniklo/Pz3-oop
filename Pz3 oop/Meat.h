#pragma once
#include "Food.h"
#include <ctime>

class Meat : public Food
{
protected:
	string _animal;	// животное, из которого мясо	
public:
	Meat();	//конструктор по умолчанию
	Meat(string name, time_t productionDate, int expirationTime, float energy100, string type);	//конструктор с параметрами
	Meat(const Meat& from_meat);	//конструктор копирования
	//геттеры сеттеры
	void set_animal(string _animal);
	string get_animal();
	//перегруженные виртуальные функции
	virtual string smell() override;
	virtual string recipe() override;

	virtual void getInfo() override;
	virtual void setInfo() override;

	virtual void ToPrint() override;
};