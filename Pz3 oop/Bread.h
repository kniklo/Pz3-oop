#pragma once
#include "Food.h"
#include <ctime>

class Bread : public Food
{
private:
	string _type;	// тип хлеба	

public:	
	Bread();	// конструктор по умолчанию
	Bread(string name, time_t productionDate, int expirationTime, float energy100, string type);	//конструктор с параметрами
	Bread(const Bread& from_bread);	//конструктор копирования
	// геттеры сеттеры
	void set_type(string _type);
	string get_type();
	// перегруженные виртуальные функции
	virtual string smell() override;
	virtual string recipe() override;
	
	virtual void getInfo() override;
	virtual void setInfo() override;

	virtual void ToPrint() override;
};