#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
#include <string>
#include <iomanip>
#include "Employee.h"


class ProductionWorker : public Employee
{
private:
	int shift;
	double payRate;
public:
	ProductionWorker();
	void setShift(int);
	void setPayRate(double);
	int getShift();
	double getPayRate();
};
ProductionWorker::ProductionWorker()
{
	shift = 0;
	payRate = 0;
}
void ProductionWorker::setShift(int input)
{
	shift = input;
}
void ProductionWorker::setPayRate(double input)
{
	payRate = input;
}

int ProductionWorker::getShift()
{
	return shift;
}

double ProductionWorker::getPayRate()
{
	return payRate;
}
#endif