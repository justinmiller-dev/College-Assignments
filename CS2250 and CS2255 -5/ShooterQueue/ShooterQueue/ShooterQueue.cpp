// ShooterQueue.cpp 
// Justin Miller
// 04/11/2023

#include <iostream>
#include<queue>
#include<string>
#include<fstream>
#include"Shooter.h"


int main()
{
	
	ifstream inputFile("Week3-bulletCount.txt");  //Establising an input stream for the txt file.
	queue<Shooter> shootingRange;
	string name;								  //Some variables to hold the data from the file 
	int bullets;
	

	if (inputFile.is_open()) {
		while (!inputFile.eof()) {               //This code takes the data from the file and puts it into a Shooter object that is added to the queue.
			inputFile >> name >> bullets;
			shootingRange.push(Shooter (name, bullets));
			cout << "Shooter: " << shootingRange.back().getName() << " Has been added to the queue. Remaining Bullets: " << shootingRange.back().getQuantity() << '\n';
		}
		inputFile.close();						//closing the file for housekeeping
	}

	while (!shootingRange.empty())			    //While the queue has data in it we grab the fist object in the queue and preform the shooting function on it.
	{
		shootingRange.front().shooting();
												//Next we check the remaining quantity and detirmine if they need to leave the queue or return to the back of it. 
		if (shootingRange.front().getQuantity() == 0) {  
			cout << "Shooter: " << shootingRange.front().getName() << " is completed" << '\n';
			shootingRange.pop();
		}
		else                                   //if the shooter at the top of the queue has bullets remaining they are sent to the back of the queue to shoot again later
		{
			cout << "Shooter: " << shootingRange.front().getName() << " has been sent to the back of the queue! Remaining Bullets: " << shootingRange.front().getQuantity() << '\n';
			shootingRange.push(shootingRange.front());
			shootingRange.pop();
		}
	}
	return 0;
};










