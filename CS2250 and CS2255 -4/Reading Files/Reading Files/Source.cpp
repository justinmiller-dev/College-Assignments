#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
	int numOfnum=0;
	double sumOfnum=0, avrgOfnum,currentNum;

	ifstream num;
	num.open("C:\\Users\\justin\\Desktop\\Desktop\\School\\CSFILES\\Chapter05\\Random.txt");
	while (num >> currentNum)
	{
		numOfnum++;

	}
	cout << sumOfnum; 




}