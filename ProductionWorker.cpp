#include "stdafx.h"
#include "ProductionWorker.h"
#include <string>
using namespace std;


ProductionWorker::ProductionWorker(string n2, int nb2, string hd2, int s, double hpr) : Employee(n2, nb2, hd2)
{
	setShift(s);
	setPayRate(hpr);
}

void ProductionWorker::setShift(int s2)
{
	if (s2 == 1 || s2 == 2)
	{
		shift = s2;
	}

	else
	{
		throw invalidShift(s2);
	}
}

void ProductionWorker::setPayRate(double hpr2)
{
	if (hpr2 >= 0.0)
	{
		hourlyPayRate = hpr2;
	}

	else
	{
		throw invalidPayRate(hpr2);
	}
}

string ProductionWorker::getShift()
{
	if (shift == 1)
	{
		return "day shift";
	}

	else
	{
		return "night shift";
	}
}

double ProductionWorker::getPayRate()
{
	return hourlyPayRate;
}

