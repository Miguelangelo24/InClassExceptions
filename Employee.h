#pragma once
#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
	string name;
	int number;
	string hireDate;
public:

	class invalidEmployeeNumber
	{
	private: 
		int value;
	public:
		invalidEmployeeNumber(int val)
		{
			value = val;
		}

		int getValue() const
		{
			return value;
		}
	};

	Employee(string n, int nb, string hd);

	void setNumber(int nb3);

	string getName();
	int getNumber();
	string getHireDate();
};

