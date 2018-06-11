#pragma once
#include "Library.h"
class car {
	int No;
	string color;
public:
	car(int No, string color) :No(No), color(color) {}
	bool operator<(const car c)const {
		if (No < c.No)
			return true;
		else if (No == c.No&&color < c.color)
			return true;
		return false;

	}
	string getColor()const {
		return color;
	}
	int getNo()const {
		return No;
	}
	friend ostream& operator<<(ostream& os, car c) {
		os << c.No << "\t" << c.color << endl;
		return os;
	}
};

// класс, который мы можем использовать в качесте метода, называется функтор
class cmpByCo {
public:
	bool operator()(const car& c1, const car& c2) {
		return c1.getColor() > c2.getColor();
	}
};

class cmpByNo {
public:
	bool operator()(const car& c1, const car& c2) {
		return c1.getNo() < c2.getNo();
	}
};