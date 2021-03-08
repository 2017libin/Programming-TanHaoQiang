#pragma once
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class Shape
{
public:
	Shape() {}
	//~Shape();
	virtual void printArea() = 0; 
private:
};

class Circle:public Shape
{
public:
	Circle(double r):radius(r){}
	//~Circle();
	virtual void printArea() {
		cout << setprecision(2) << setiosflags(ios::fixed);
		cout << "圆的面积为：" << 3.14 * radius * radius << endl;
	}
private:
	double radius;
};


class Rectangle :public Shape {
public:
	Rectangle(double l,double w):length(l),width(w){}
	virtual void printArea() {
		cout << setprecision(2) << setiosflags(ios::fixed);
		cout << "长方形的面积为：" << length * width << endl;
	}
private:
	double length;
	double width;
};

class Triangle :public Shape {
public:
	Triangle(double a, double b, double c):sidea(a),sideb(b),sidec(c){
		while (!(sidea + sideb > sidec && sidea + sidec > sideb && sideb + sidec > sidea)) {
			cout << "输入的三条边不能构成三角形！请重新输入：";
			cin >> sidea >> sideb >> sidec;
		}
	}
	virtual void printArea() {
		cout << setprecision(2) << setiosflags(ios::fixed);
		double p = (sidea + sideb + sidec) / 2;
		cout << "三角形的面积为" << sqrt(p*(p-sidea)*(p-sideb)*(p-sidec));
	}
private:
	double sidea, sideb, sidec;
};