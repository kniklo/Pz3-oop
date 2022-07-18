#pragma warning(disable : 4996)
#include "Food.h"
#include <ctime>
#include <string>

void Food::set_name(string name) { _name = name; }
string Food::get_name() { return _name; }
void Food::set_productionDate(time_t productionDate) { _productionDate = productionDate; }
time_t Food::get_productionDate() { return _productionDate; }
void Food::set_expirationTime(int expirationTime) { _expirationTime = expirationTime; }
int  Food::get_expirationTime() { return _expirationTime; }
void Food::set_energy100(float energy100) { _energy100 = energy100; }
float  Food::get_energy100() { return _energy100; }

void Food::getInfo()
{
	string s = ctime(&_productionDate);
	cout << "< " << _name << "> " << " Producted:" << s << " Energy in 100 g: " << _energy100;
}
void Food::setInfo()
{
	time_t rawtime;
	string s_date;
	cout << "Enter name: ";
	cin >> _name;
	cout << "Enter product date in format dd.mm.yyyy: ";
	cin >> s_date;
	string dd = s_date.substr(0, 2);
	string mm = s_date.substr(3, 2);
	string yyyy = s_date.substr(6, 4);
	tm* tm_date = new tm;
	rawtime = time(0);
	tm_date = gmtime(&rawtime);
	tm_date->tm_year = stoi(yyyy) - 1900;
	tm_date->tm_mon = stoi(mm) - 1;
	tm_date->tm_mday = stoi(dd);
	time_t t_date = mktime(tm_date);
	_productionDate = t_date;
	cout << "Enter expiration time in days: ";
	cin >> _expirationTime;
	cout << "Enter energy in 100 g, kcal: ";
	cin >> _energy100;	
}

void Food::ToPrint()
{
	cout << "FOOD\n";
}