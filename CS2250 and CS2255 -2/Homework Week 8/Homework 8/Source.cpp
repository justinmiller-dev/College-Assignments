#include <iomanip>
#include <string>
#include "ProductionWorker.h"
#include <iostream>
using namespace std;

int main() 
{
	string shiftType;
	int shift;

	ProductionWorker employee1;
	employee1.setEmployeeName("John Jones");
	employee1.setEmployeeId(123);
	employee1.setEmployeeHireDate("1/1/2006");
	employee1.setShift(2);
	employee1.setPayRate(18.00);

	shift = employee1.getShift();
	
	if (shift == 1) 
	{
		shiftType = "Day";
	}
	else 
	{
		shiftType = "Night";
	}

	cout << "Name: " << employee1.getEmployeeName() << endl;
	cout << "ID Number: " << employee1.getEmployeeId() << endl;
	cout << "Shift: " << shiftType << endl;
	cout << "shift Number: " << employee1.getShift() << endl;
	cout << "Hire Date: " << employee1.getEmployeeHireDate() << endl;
	cout << "Pay rate: " << employee1.getPayRate() << endl << endl;

}