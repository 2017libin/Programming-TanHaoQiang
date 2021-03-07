#pragma once
//#pragma warning(disable:4996)
#include<iostream>
#include<iomanip>
#include<cmath>
#include<stack>
#include <vector>
#include <string>
using namespace std;

class Time
{
public:
	Time(int hour, int minute=0, int sec=0, int flag=0);
	void set_flag(int);
	void set_time();
	void show_time();
	~Time();

private:
	int hour;
	int minute;
	int sec;
	int flag;
};

class Student;
void Code9_5(const Student* p, int n);
class Student
{
public:
	Student();
	~Student();
	void display();
	friend void Code9_5(const Student* p, int n);
private:
	string no;
	string name;
	int score;
};

class SalePerson{
public:
	SalePerson();
	void total();
private:
	string no;
	double product_price;
	int product_num;
};


class Good
{
public:
	Good();
	~Good();
	static void set_count(double c);
	static double average();
	static void display();
	friend void SalePerson::total();
private:
	static double sum;  // 商品卖出去的总金额
	static double count;  // 此商品的统一折扣
	static int num;  // 此商品卖出去的总数
};

class Date;
//class Time1;
//void display(Date&, Time&);

class Time1
{
public:
	//Time();
	Time1(int, int, int);
	~Time1();
	void display(Date&);
	void display();
	friend void display(Date&, Time1&);
private:
	int hour;
	int minute;
	int sec;
};


class Date
{
public:
	Date();
	Date(int);
	Date(int, int);
	Date(int, int, int);
	~Date();
	void display();
	friend void display(Date&, Time1&);
private:
	int year;
	int month;
	int day;
};

template <class numtype>
class Compare
{
public:
	Compare(numtype a, numtype b);
	numtype max();
	numtype min();
private:
	numtype x;
	numtype y;
};

// Compare模板类的成员函数定义
template <class numtype>
Compare<numtype>::Compare(numtype a, numtype b) {
	x = a;
	y = b;
}

template <class numtype>
numtype Compare<numtype>::max() {
	return (x > y) ? x : y;
}

template <class numtype>
numtype Compare<numtype>::min() {
	return (x < y) ? x : y;
}


class Complex
{
public:
	Complex() { real = imag = 0; }
	Complex(double r) { real = r; imag = 0; }
	Complex(int r) { real = r; imag = 0; }  // int转换构造函数
	Complex(double r, double i):real(r),imag(i){}
	operator double() { return real; }
	friend Complex operator + (Complex, Complex);
	~Complex() {}
	void display();
private:
	double real;
	double imag;
};


class Matrix23
{
public:
	Matrix23();
	~Matrix23();
	friend Matrix23 operator +(Matrix23&, Matrix23&);
	friend istream& operator >> (istream&, Matrix23&);
	friend ostream& operator << (ostream&, Matrix23&);
private:
	int data[2][3];
};

class Teacher_;
class Student1
{
public:
	Student1();
	Student1(string n, string na, string s) :num(n), name(na), sex(s) {}
	//~Student1();
	void display();
	//friend Teacher::Teacher(Student&);  // 不起作用
	friend class Teacher_;
private:
	string num;
	string name;
	string sex;
};

class Teacher_
{
public:
	Teacher_();
	Teacher_(string n, string na, string s, string t) :num(n), name(na), sex(s), title(t) {}
	Teacher_(Student1&);
	//~Teacher();
	void display();
private:
	string num;
	string name;
	string sex;
	string title;
};
