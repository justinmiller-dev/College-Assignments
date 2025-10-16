#pragma once
#include <string>
using std::string;

/*
Justin Miller
04/01/2023
Project 1
*/

// Employee class to hold employee data. 
class Employee
{
public:
	int id;
	string firstName;
	string lastName;
	string phoneNumber;
	string email;
	double salary;

// Employee Constructor to initalize data

	Employee(int id, string firstName, string lastName, string phoneNumber, string email, double salary) {
		this->id = id;
		this->firstName = firstName;
		this->lastName = lastName;
		this->phoneNumber = phoneNumber;
		this->email = email;
		this->salary = salary;
	}
};