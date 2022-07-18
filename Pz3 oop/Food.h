#pragma once
#include <iostream>
#include <ctime>

using namespace std;

class Food //родительский абстрактный класс ибо имеет он одну чисто виртуальную функцию
{
protected:
	string _name;			//низвание
	time_t _productionDate;	//дата изготовления
	int _expirationTime;	//срок годности дней
	float _energy100;		//энернетическая ценность 100 г еды
public:		
	void set_name(string _name);
	string get_name();
	void set_productionDate(time_t productionDate);
	time_t get_productionDate();
	void set_expirationTime(int expirationTime);
	int get_expirationTime();
	void set_energy100(float expirationTime);
	float get_energy100();

	virtual string smell() = 0; //виртуальная функция - запах еды
	virtual string recipe() = 0; //виртуальная функция - рецепт приготовления

	virtual void getInfo();
	virtual void setInfo();

	virtual void ToPrint();
};