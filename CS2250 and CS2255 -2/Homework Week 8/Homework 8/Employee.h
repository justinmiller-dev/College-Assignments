#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iomanip>
using namespace std;

class Employee
{
private:
	string employeeName;
	int employeeId;
	string hireDate;
public:
	void setEmployeeName(string);
	void setEmployeeId(int);
	void setEmployeeHireDate(string);
	string getEmployeeName();
	int getEmployeeId();
	string getEmployeeHireDate();
	Employee();
};
Employee::Employee() 
{
	employeeName = "";
	employeeId = 0;
	hireDate = "";
}
void Employee::setEmployeeName(string name)
{
	employeeName = name;
}
void Employee::setEmployeeId(int id)
{
	employeeId = id;
}
void Employee::setEmployeeHireDate(string date)
{
	hireDate = date;
}
string Employee::getEmployeeName()
{
	return employeeName;
}
int Employee::getEmployeeId()
{
	return employeeId;
}
string Employee::getEmployeeHireDate()
{
	return hireDate;
}
#endif