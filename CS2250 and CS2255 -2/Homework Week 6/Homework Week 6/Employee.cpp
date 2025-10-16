#include "Employee.h"
#include<iomanip>
#include<iostream>
#include<string>

int main() 
{
	Employee employee1;
	employee1.setEmployeeInfo("Susan Meyers", 47899, "Accounting", "Vice President");

	Employee employee2;
	employee2.setEmployeeInfo("Mark Jones", 39119, "IT", "Programmer");

	Employee employee3;
	employee3.setEmployeeInfo("Joy Rogers", 81774, "Manufacturing", "Engeineer");


	cout << "Name: " << employee1.getEmployeeName() << endl;
	cout << "ID Number: " << employee1.getEmployeeId() << endl;
	cout << "Department: " << employee1.getEmployeeDep() << endl;
	cout << "Position: " << employee1.getEmployeePos() << endl << endl;

	cout << "Name: " << employee2.getEmployeeName() << endl;
	cout << "ID Number: " << employee2.getEmployeeId() << endl;
	cout << "Department: " << employee2.getEmployeeDep() << endl;
	cout << "Position: " << employee2.getEmployeePos() << endl << endl;

	cout << "Name: " << employee3.getEmployeeName() << endl;
	cout << "ID Number: " << employee3.getEmployeeId() << endl;
	cout << "Department: " << employee3.getEmployeeDep() << endl;
	cout << "Position: " << employee3.getEmployeePos() << endl << endl;

}