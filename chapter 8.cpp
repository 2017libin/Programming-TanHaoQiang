//#pragma warning(disable:4996)
#include<iostream>
#include<iomanip>
#include<cmath>
#include<stack>
#include <vector>
#include <string>
using namespace std;

#include "arraymax.h"

class Rectangle
{
public:
	Rectangle();
	~Rectangle();
	void set_value() {
		cin >> length >> width >> height;
	}
	double get_volumn() {
		return length * width * height;
	}
	void show_volum() {
		cout << get_volumn() << endl;
	}
private:
	double length;
	double width;
	double height;
};

Rectangle::Rectangle()
{
}

Rectangle::~Rectangle()
{
}

void Code8_5() {
	Array_max a;
	a.set_value();
	a.max_value();
	a.show_value();
}

void Code8_6() {
	Rectangle r[3];
	for (int i = 0; i < 3; ++i)
		r[i].set_value();
	for (int i = 0; i < 3; ++i)
		r[i].show_volum();
}
int main8() {
	Code8_6();
	return 0;
}
