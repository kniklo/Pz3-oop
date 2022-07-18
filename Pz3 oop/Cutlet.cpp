#include "Cutlet.h"
#include <string>
using namespace std;

Cutlet::Cutlet()
{
	Meat::Meat();
	_weigth = 0;
}
Cutlet::Cutlet(string name, time_t productionDate, int expirationTime, float energy100, string animal, float weigth)
{
	Meat::Meat(name, productionDate, expirationTime, energy100, animal);
	_weigth = weigth;
}
Cutlet::Cutlet(const Cutlet& from_cutlet)
{
	_name = from_cutlet._name;
	_productionDate = from_cutlet._productionDate;
	_expirationTime = from_cutlet._expirationTime;
	_energy100 = from_cutlet._energy100;
	_animal = from_cutlet._animal;
	_weigth = from_cutlet._weigth;
}

void Cutlet::set_weigth(float weigth)
{
	_weigth = weigth;
}
float Cutlet::get_weigth()
{
	return _weigth;
}

string Cutlet::smell()
{
	string result = "Smells like cutlet~~~~";
	return result;
}

string Cutlet::recipe()
{
	string result = "cut the meat, make balls and fry";
	return result;
}

void Cutlet::getInfo()
{
	Meat::getInfo();
	cout << " Weigth is : " << _weigth;
}

void Cutlet::setInfo()
{	
	Meat::setInfo();
	cout << "Enter cutlet weigth: ";
	cin >> _weigth;
}

void Cutlet::ToPrint()
{
	cout << "CUTLET\n";
}