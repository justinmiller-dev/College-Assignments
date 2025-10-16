#include<iostream>
#include<fstream>
#include<string>
#include<list>
#include "Employee.h"

using std::string;
using namespace std;
/*
Justin Miller 
04/01/2023
Project 1
*/



int main() {
//Opening the file and creating an empty list 
	ifstream employeeData("Week 1-employeeDataset_Project 1.txt");
	list<Employee*> employeeList;

//Read data from the file into the list
	int id;
	string firstName, lastName, phoneNumber, email;
	double salary;
	
	if (employeeData.is_open()) {								 //Checks to make sure that the file is open 
		while (employeeData >> id >> firstName >> lastName >> phoneNumber >> email >> salary) {
			Employee* emp = new Employee(id, firstName, lastName, phoneNumber, email, salary);
			
			list<Employee*>::iterator it = employeeList.begin(); //Creates a iterator and sets is position to the beginning of the list

			while (it != employeeList.end() && (*it)->id < id) { //Compairs the current id of the emp to the id's in the list until it finds the position that it should be in.
				it++;
			}														
			employeeList.insert(it, emp);						 //Inserts the new emp object into the correct position. 
		}
//Display the list 
		for (Employee* emp : employeeList) {
			cout << emp->id << " " << emp->firstName << " " << emp->lastName << " " << emp->phoneNumber << " " << emp->email << " " << emp->salary << endl;
		}
//Close the file
		employeeData.close();
	}
//If the file fails to open show "file not found"
	else {
		cout << "file not found";
	}
}

