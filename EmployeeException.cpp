// EmployeeException.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Employee.h"
#include "ProductionWorker.h"
using namespace std;

int main()
{
	string name;
	int id;
	string hireDate;
	int shift;
	double hourlyPayRate; 

	cout << "Enter your name: " << endl;
	cin >> name;

	cout << "Enter your 4 digit ID number: " << endl;
	cin >> id;

	cout << "Enter your start date in this format (MMDDYYYY): " << endl;
	cin >> hireDate;

	cout << "Enter 1 if you have the day shift. Enter 2 if you have the night shift: " << endl;
	cin >> shift;

	cout << "Enter your hourly pay rate: " << endl;
	cin >> hourlyPayRate;

	try
	{
		ProductionWorker pw1(name, id, hireDate, shift, hourlyPayRate);
		cout << "Name: " << pw1.getName() << endl;
		cout << "ID number: " << pw1.getNumber() << endl;
		cout << "Shift: " << pw1.getShift() << endl;
		cout << "Start date: " << pw1.getHireDate() << endl;
		cout << "Hourly Pay Rate: " << pw1.getPayRate() << endl;
	}

	catch(Employee::invalidEmployeeNumber e)
	{
		cout << "ERROR: " << e.getValue() << endl;
		cout << "ID number cannot be less than 0 or greater than 9999." << endl;
	}

	catch (ProductionWorker::invalidShift s)
	{
		cout << "ERROR: " << s.getValue() << endl;
		cout << "Shift indicator must be 1 or 2." << endl;
	}

	catch (ProductionWorker::invalidPayRate p)
	{
		cout << "ERROR: " << p.getValue() << endl;
		cout << "Pay rate cannot be a negative number" << endl;
	}

	return 0;
}

