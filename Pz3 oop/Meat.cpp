#include "Meat.h"
#include <string>
using namespace std;

Meat::Meat()
{
	_name = "";
	_productionDate = time(0);
	_expirationTime = 3;
	_energy100 = 100;
	_animal = "";
}
Meat::Meat(string name, time_t productionDate, int expirationTime, float energy100, string animal)
{
	_name = name;
	_productionDate = productionDate;
	_expirationTime = expirationTime;
	_energy100 = energy100;
	_animal = animal;
}
Meat::Meat(const Meat& from_meat)
{
	_name = from_meat._name;
	_productionDate = from_meat._productionDate;
	_expirationTime = from_meat._expirationTime;
	_energy100 = from_meat._energy100;
	_animal = from_meat._animal;
}

void Meat::set_animal(string animal)
{
	_animal = animal;
}
string Meat::get_animal()
{
	return _animal;
}

string Meat::smell()
{
	string result = "Smells like meat~~~~";
	return result;
}

string Meat::recipe()
{
	string result = "Take meat and freez it";
	return result;
}

void Meat::getInfo()
{
	Food::getInfo();
	cout << " Meat is from : " << _animal;
}

void Meat::setInfo()
{	
	Food::setInfo();
	cout << "Enter animal from: ";
	cin >> _animal;
}

void Meat::ToPrint()
{
	cout << "MEAT\n";
}