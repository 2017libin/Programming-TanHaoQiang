#pragma once
//#pragma warning(disable:4996)
#include <string>
#include<iostream>
#include<iomanip>
#include<cmath>
#include<stack>
#include <vector>
using namespace std;

class Teacher1 {
public:
	Teacher1(string n,int a, string s,string ad,string p,string t):name(n),age(a),sex(s),addr(ad),phone(p),title(t){}
	void display();
private:
	string name;
	int age;
	string sex;
	string addr;
	string phone;
	string title;
};


class Cadre {
public:
	Cadre(string n, int a, string s, string ad, string p, string po) :name(n), age(a), sex(s), addr(ad), phone(p), post(po) {}
	void display();
protected:
	string name;
	int age;
	string sex;
	string addr;
	string phone;
	string post;
};

class Teacher_Cadre :public Teacher1,public Cadre {
public:
	Teacher_Cadre(string n, int a, string s, string ad, string p, string po, string t, int w) :
		Teacher1(n, a, s, ad, p, t), Cadre(n, a, s, ad, p, po), wage(w) {}
	void show();
private:
	int wage;
};



