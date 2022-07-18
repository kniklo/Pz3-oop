#include <iostream>
#include "Food.h"
#include "Bread.h"
#include "Meat.h"
#include "Cutlet.h"
#include "Printer.h"
using namespace std;
//начинка котлеты сыр масло хлеб мука
int main()
{	
	Printer pr;
	Bread b1;	
	Meat m1;
	Cutlet c1;
	Food* p;

	pr.Printing(&b1);
	b1.setInfo();
	cout << "-----------------\n";
	b1.getInfo();
	cout << endl;
	p = &b1;
	cout << p->smell() << endl;
	cout << p->recipe() << endl;
	cout << endl;
	
	pr.Printing(&m1);
	m1.setInfo();
	cout << "-----------------\n";
	m1.getInfo();
	cout << endl;
	p = &m1;
	cout << p->smell() << endl;
	cout << p->recipe() << endl;
	cout << endl;

	pr.Printing(&c1);
	c1.setInfo();
	cout << "-----------------\n";
	c1.getInfo();
	cout << endl;
	p = &c1;
	cout << p->smell() << endl;
	cout << p->recipe() << endl;
	cout << endl;	
	getchar();
}

