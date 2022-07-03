#pragma once
#include <iostream>

using namespace std;

class Food //родительский абстрактный класс ибо имеет он одну чисто виртуальную функцию
{
protected:
	string name;
	string productionTime;
	string expirationDate;
public:
	Food()
	{
		name = "";
		productionTime = "23.06.2022";
		expirationDate = "";
	}
	Food(string _name, string prTime, string expDate) : name(_name), productionTime(prTime), expirationDate(expDate)
	{
	}
	Food(const Food& from_food) : name(from_food.name), productionTime(from_food.productionTime), expirationDate(from_food.expirationDate)
	{
	}
	void setName(string _name);
	string GetName();
	void setPtime(string pTime);
	string GetPtime();
	void setEtime(string eDate);
	string GetEtime();

	virtual string Smell() = 0; //Чисто виртуальная функция Smell() - запах еды
	virtual void fillInfo() = 0;
	virtual string cut() = 0;


};