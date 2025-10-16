#pragma once
#include<string>

using std::string;

class Flower {
public:
	Flower(string definedName, int definedPedals, float definedPrice) {
		name = definedName;
		pedals = definedPedals;
		price = definedPrice;
	}
	void setName(string nName) {
		name = nName;
	}
	string getName() const {
		return name;
	}
	void setPrice(float nPrice) {
		price = nPrice;
	}
	float getPrice() const {
		return price;
	}
	void setPedals(int nPedals) {
		pedals = nPedals;
	}
	int getPedals() const {
		return pedals;
	}
private:
	string name;
	int pedals;
	float price;
};