#pragma once
#include <string>
#include <iostream>
#include "Employee.h"
using namespace std;

class ProductionWorker : public Employee
{
private:
	int shift;
	double hourlyPayRate;
public:

	class invalidShift
	{
	private:
		int value;
	public:
		invalidShift(int val)
		{
			value = val;
		}

		int getValue() const
		{
			return value;
		}
	};

	class invalidPayRate
	{
	private:
		double value2;
	public:
		invalidPayRate(double val2)
		{
			value2 = val2;
		}

		double getValue() const
		{
			return value2;
		}
	};

	ProductionWorker(string n2, int nb2, string hd2, int s, double hpr);

	void setShift(int s2);
	void setPayRate(double hpr2);
	string getShift();
	double getPayRate();
};

