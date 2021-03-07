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
	static double sum;  // ��Ʒ����ȥ���ܽ��
	static double count;  // ����Ʒ��ͳһ�ۿ�
	static int num;  // ����Ʒ����ȥ������
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

// Compareģ����ĳ�Ա��������
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