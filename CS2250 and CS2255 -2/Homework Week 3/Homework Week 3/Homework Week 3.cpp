#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//Justin Miller
//Week 3 Homework
//CS2255XTIA

struct rainfall
{
	float totalRain;
	float HighT;
	float lowT;
	float avarageT;
};

	float totalAvarageRain;
	float yearTotalRain;
	float yearAvarageTemperature;
	float totalAvarageTemp;
	float lowestTemp = 140;
	float HighestTemp = -100;
	int lowestMonth;
	int highestMonth;

int main() {


	rainfall monthlyRain[12];
	string month[12]{ "January","Febuary","March","April","May","June","July","August","September","October","November","December"};
	cout << "Please enter the following information:" << endl;
	for (int count = 0; count < 12; count++) {
		cout << month[count] << endl << endl;
		cout <<"     Total Rainfall: ";
		cin >> monthlyRain[count].totalRain;
		if (monthlyRain[count].totalRain < 0) {
			cout << "     Total Rainfall cannot be less then 0!" << endl;
			cout << "     Please enter again: ";
			cin >> monthlyRain[count].totalRain;
		}
		cout<< "     Highest Temperature: ";
		cin >> monthlyRain[count].HighT;
		if (monthlyRain[count].HighT > 140) {
			cout << "     Temperature too high!" << endl;
			cout << "     Please enter a new Temperature:";
			cin >> monthlyRain[count].HighT;
		}
		if (monthlyRain[count].HighT < -100) {
			cout << "     Temperature too low!" << endl;
			cout << "     Please enter a new Temperature:";
			cin >> monthlyRain[count].HighT;
		}
		if (monthlyRain[count].HighT > HighestTemp) {
			HighestTemp = monthlyRain[count].HighT;
			highestMonth = count;
		}
		cout << "     lowest Temperature: ";
		cin >> monthlyRain[count].lowT;
		if (monthlyRain[count].lowT > 140) {
			cout << "     Temperature too high!" << endl;
			cout << "     Please enter a new Temperature:";
			cin >> monthlyRain[count].lowT;
		}
		if (monthlyRain[count].lowT < -100) {
			cout << "     Temperature too low!" << endl;
			cout << "     Please enter a new Temperature:";
			cin >> monthlyRain[count].lowT;
		}
		if (monthlyRain[count].lowT < lowestTemp) {
			lowestTemp = monthlyRain[count].lowT;
			lowestMonth = count;
		}
		monthlyRain[count].avarageT = (monthlyRain[count].lowT + monthlyRain[count].HighT) / 2;
		yearTotalRain += monthlyRain[count].totalRain;
		totalAvarageTemp += monthlyRain[count].avarageT;
	}
	totalAvarageRain = yearTotalRain / 12;
	yearAvarageTemperature = totalAvarageTemp / 12;
	cout << endl;
	cout << "Total Rainfall: " << yearTotalRain << endl;
	cout << "Avarage Monthly Rain: " << totalAvarageRain << endl;
	cout << "Avaragre Montly Temperature: " << yearAvarageTemperature << endl;
	cout << "Highest Temperature: " << HighestTemp << "  (" << month[highestMonth] << ")" << endl;
	cout << "lowest Temperature: " << lowestTemp << "  (" << month[lowestMonth] << ")" << endl;
}

