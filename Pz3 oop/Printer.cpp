#include "Printer.h"
#include "Food.h"

void Printer::Printing(Food* obj)
{
	//вызываем через позднее связывание виртуальную функцию переданного класса
	obj->ToPrint();
}