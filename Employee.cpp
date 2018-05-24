#include "stdafx.h"
#include "Employee.h"
#include <string>
#include <iostream>
using namespace std;


Employee::Employee(string n, int nb, string hd)
{
	name = n;
	setNumber(nb);
	hireDate = hd;
}

void Employee::setNumber(int nb3)
{
	if (nb3 >= 0 && nb3 <= 9999)
	{
		number = nb3;
	}

	else
	{
		throw invalidEmployeeNumber(nb3);
	}
}

string Employee::getName()
{
	return name;
}

int Employee::getNumber()
{
	return number;
}

string Employee::getHireDate()
{
	return hireDate;
}
