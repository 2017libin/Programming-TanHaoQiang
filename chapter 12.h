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
		cout << "Բ�����Ϊ��" << 3.14 * radius * radius << endl;
	}
private:
	double radius;
};


class Rectangle :public Shape {
public:
	Rectangle(double l,double w):length(l),width(w){}
	virtual void printArea() {
		cout << setprecision(2) << setiosflags(ios::fixed);
		cout << "�����ε����Ϊ��" << length * width << endl;
	}
private:
	double length;
	double width;
};

class Triangle :public Shape {
public:
	Triangle(double a, double b, double c):sidea(a),sideb(b),sidec(c){
		while (!(sidea + sideb > sidec && sidea + sidec > sideb && sideb + sidec > sidea)) {
			cout << "����������߲��ܹ��������Σ����������룺";
			cin >> sidea >> sideb >> sidec;
		}
	}
	virtual void printArea() {
		cout << setprecision(2) << setiosflags(ios::fixed);
		double p = (sidea + sideb + sidec) / 2;
		cout << "�����ε����Ϊ" << sqrt(p*(p-sidea)*(p-sideb)*(p-sidec));
	}
private:
	double sidea, sideb, sidec;
};