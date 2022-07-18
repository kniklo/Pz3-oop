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
	// объявляем переменные
	Printer pr;
	Bread b1;	
	Meat m1;
	Cutlet c1;
	Food* p;
	
	// вызываем метод ToPrint класса Bread через метод класса Printer
	pr.Printing(&b1);
	// виртуальная функция ввода информации
	b1.setInfo();
	cout << "-----------------\n";
	// виртуальная функция получения информации
	b1.getInfo();
	cout << endl;
	// вызов виртуальных функций через позднее связывание
	p = &b1;
	cout << p->smell() << endl;
	cout << p->recipe() << endl;
	cout << endl;
	
	// вызываем метод ToPrint класса Meat через метод класса Printer
	pr.Printing(&m1);
	// виртуальная функция ввода информации
	m1.setInfo();
	cout << "-----------------\n";
	// виртуальная функция получения информации
	m1.getInfo();
	cout << endl;
	// вызов виртуальных функций через позднее связывание
	p = &m1;
	cout << p->smell() << endl;
	cout << p->recipe() << endl;
	cout << endl;

	// вызываем метод ToPrint класса Cutlet через метод класса Printer
	pr.Printing(&c1);
	// виртуальная функция ввода информации
	c1.setInfo();
	cout << "-----------------\n";
	// виртуальная функция получения информации
	c1.getInfo();
	cout << endl;
	// вызов виртуальных функций через позднее связывание
	p = &c1;
	cout << p->smell() << endl;
	cout << p->recipe() << endl;
	cout << endl;	
	// ожидаем нажатия клавиши
	getchar();
}

