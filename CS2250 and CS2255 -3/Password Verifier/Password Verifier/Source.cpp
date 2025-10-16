#include<iostream>
#include<iomanip>
#include<cctype>
#include<cstring>
//Justin Miller
using namespace std;
int getLength(char*);
int countUpper(char*, int);
int countDigits(char*, int);
int countLower(char*, int);
void testPassword(int, int,int);


int main()
{
	char password[100];

	cout << "The password must have:" << '\n'
		<< "       at least 6 characters," << '\n'
		<< "       at least one uppercase character," << '\n'
		<< "       at least one lowercase character," << '\n'
		<< "       at least one numeric digit," << '\n';
	cout << "Enter a password: ";
	
	cin.getline(password,100);
	
	int passLength = getLength(password);
	int amountUpper = countUpper(password,passLength);
	int amountDigit = countDigits(password, passLength);
	int amountLower = countLower(password, passLength);
	if (passLength >= 6 && amountUpper > 0 && amountLower > 0) {
		cout << "The password is valid."<< endl;
	}
	else {
		if (passLength < 6) {
			cout << "The password must be at least 6 or more characters" << endl;
		}
		testPassword(amountUpper, amountLower, amountDigit);
		cout << "The password is not valid." << endl;
	}

	
	
	//For testing ouput of variables
	//cout << password << endl;
	//cout << passLength << endl;
	//cout << amountUpper << endl;
	//cout << amountDigit;
}

//This fuction retuns the length of the password
int getLength(char *inputPtr) {
	int length = 0;
	length = strlen(inputPtr);
	return length;
}

//This function counts uppercase characters
int countUpper(char* inputPtr, int size) {
	int upper = 0;
	for (int count = 0; count<strlen(inputPtr); count++) {
		if (isupper(inputPtr[count])) {
			upper++;
		}
	}
	return upper;
}
//This function counts digits
int countDigits(char* inputPtr, int size) {
	int digit = 0;
	for (int count = 0; count < strlen(inputPtr); count++) {
		if (isdigit(inputPtr[count])) {
			digit++;
		}
	}
	return digit;
}
//This function counts uppercase characters
int countLower(char* inputPtr, int size) {
	int lower = 0;
	for (int count = 0; count < strlen(inputPtr); count++) {
		if (islower(inputPtr[count])) {
			lower++;
		}
	}
	return lower;
}
//This function returns why the password is not valid
void testPassword(int a, int b, int c)
{
	if (a == 0) {
		cout << "The password must have:" << endl;
		cout << "       at least one uppercase character" << endl;
	}
	if (b == 0) {
		cout << "The password must have:" << endl;
		cout << "       at least one lowercase character" << endl;
	}
	if (c == 0) {
		cout << "The password must have:" << endl;
		cout << "       at least one digit" << endl;
	}
	return;

}