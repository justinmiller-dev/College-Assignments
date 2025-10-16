#pragma once
#include <string>
#include<iomanip>
using namespace std;


class Employee
{
private:	
	string name;
	int idNumber;
	string department;
	string position;	
public:
	string getEmployeeName();
	int getEmployeeId();
	string getEmployeeDep();
	string getEmployeePos();
	void setEmployeeInfo(string, int, string, string);
	Employee(string,int,string,string);
	Employee(string, int);
	Employee();
};
Employee::Employee(string n, int id, string dep, string pos)
{
	name = n;
	idNumber = id;
	department = dep;
	position = pos;
}
Employee::Employee(string n, int id)
{
	name = n;
	idNumber = id;
	department = " ";
	position = " ";
}
Employee::Employee()
{
	name = " ";
	idNumber = 0;
	department = " ";
	position = " ";
}
string Employee::getEmployeeName()
{
	return name;
}
int Employee::getEmployeeId()
{
	return idNumber;
}
string Employee::getEmployeeDep()
{
	return department;
}
string Employee::getEmployeePos()
{
	return position;
}
void Employee::setEmployeeInfo(string n,int id,string dep,string pos)
{
	name = n;
	idNumber = id;
	department = dep;
	position = pos;
}
