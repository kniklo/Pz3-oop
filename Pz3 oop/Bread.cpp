#include "Bread.h"
#include <string>
#include <ctime>
using namespace std;
// конструктор по умолчанию
Bread::Bread()
{	
	_name = "";
	_productionDate = time(0);
	_expirationTime = 0;
	_energy100 = 0;
	_type = "";
}
// конструктор с параметрами
Bread::Bread(string name, time_t productionDate, int expirationTime, float energy100, string type)
{
	_name = name;
	_productionDate = productionDate;
	_expirationTime = expirationTime;
	_energy100 = energy100;
	_type = type;
}
//конструктор копирования
Bread::Bread(const Bread& from_bread)
{
	_name = from_bread._name;
	_productionDate = from_bread._productionDate;
	_expirationTime = from_bread._expirationTime;
	_energy100 = from_bread._energy100;
	_type = from_bread._type;
}
// геттеры сеттеры
void Bread::set_type(string type)
{
	_type = type;
}
string Bread::get_type()
{
	return _type;
}
// реализации перегруженных виртуальных функций
string Bread::smell()
{
	 string result = "Smells like bread~~~~" ;
	 return result;
}

string Bread::recipe()
{
	string result = "Flour, eggs, water knead and bake";
	return result;
}

void Bread::getInfo()
{
	Food::getInfo();
	cout << " Type of bread is: " << _type;
}

void Bread::setInfo()
{	
	Food::setInfo();
	cout << "Enter bread type: ";
	cin >> _type;
}

void Bread::ToPrint()
{
	cout << "BREAD\n";
}
