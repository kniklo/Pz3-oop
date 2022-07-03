#include "Bread.h"
using namespace std;

string Bread:: GetBreadName() { return flour; }
void Bread:: SetBreadName(string _flour) { flour = _flour; }

string Bread::Smell() 
{
	 string result = "Smells like bread~~~~" ;
	 return result;
}

string Bread::cut()
{
	string i;
	i = "slice";
	return i;
}

//перегруженны оператор вывода
ostream& operator<< (ostream& out, const Bread& bread)
{
	out << "< " << bread.name << "> " << " from " << bread.flour << " Production time:" << bread.productionTime<< " Eat before: " << bread.expirationDate << "\n";
	return out;
}
//перегруженный оператор ввода
istream& operator>> (istream& in, Bread& bread)
{
	cout << "Enter bread name: ";
	cin >> bread.name;
	cout << "Enter from what type of flour it was made: ";
	cin >> bread.flour;
	cout << "Enter expiration date: ";
	cin >> bread.expirationDate;
	return in;
}
/*void Bread::fillInfo(Bread b)
{
	cout << "Enter what type of bread do you want :" << endl;
	cout << "1. from a flour\t2. from b flour\n";
	int i;
	cin >> i;
	
	switch (i)
	{
		case(1)
			SetBreadName("a");

	default:
		break;
	}
}
*/