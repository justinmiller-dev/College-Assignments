#pragma once
#include<string>
#include<iostream>

using std::string;
using namespace std;


class Shooter
{

public:
	Shooter(string name, int bullet) {
		this->name = name;
		this->initialBulletCount = bullet;
		bulletCount = initialBulletCount;
	}
	
	void shooting() {
		bulletCount = bulletCount - 1;
	}

	string getName() {
		return name;
	}

	int getQuantity() {
		return bulletCount;
	}

	void display() {
		cout << name << " has " << bulletCount << " bullets left " << '\n';
	}

private:
	string name;
	int bulletCount;
	int initialBulletCount;
};

