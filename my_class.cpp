#include "my_class.h"

// Time类的成员函数定义
void Time::set_time() {
	cin >> hour >> minute >> sec;
}
void Time::set_flag(int f) {
	flag = f;
}
void Time::show_time() {
	cout << hour << ":" << minute << ":" << sec << endl;
}

Time::Time(int flag, int hour, int minute, int sec) {
	this->hour = hour;
	this->minute = minute;
	this->sec = sec;
	this->flag = flag;
	cout << "调用默认构造函数" << flag << endl;
}

Time::~Time()
{
	cout << "调用析构函数：" << flag << endl;
}

// Student类的成员函数定义

Student::Student()
{
	cout << "请输入学生的学号、姓名和成绩：";
	cin >> no >> name >> score;
}

Student::~Student()
{
}

void Student::display() {
	cout << setw(10) << no << setw(8) << name << setw(5) << score << endl;;
}


// Good类的成员函数定义
Good::Good()
{
}

Good::~Good()
{
}

void Good::set_count(double c) {
	count = c;
}


double Good::average() {
	return sum / num;
}

void Good::display() {
	cout << "商品卖出的数量为：" << num << endl;
	cout << "商品卖出的金额为：" << sum << endl;
	cout << "平均每件价格为：" << average();
}

SalePerson::SalePerson() {
	cout << "请输入销售员编号、销售数量以及销售单价: ";
	cin >> no >> product_num >> product_price;
}

void SalePerson::total() {
	double c;  // 打几折
	Good::num += product_num;
	product_num > 10 ? c = Good::count * 0.98 : c = Good::count;
	Good::sum += product_num * product_price * c;
}


// Date类的成员函数声明
Date::Date()
{
	year = 2005;
	month = day = 1;
}

Date::Date(int m) :month(m) {
	day = 1;
	year = 2005;
}
Date::Date(int m, int d) : month(m), day(d) {
	year = 2005;
}

Date::Date(int y, int m, int d):year(y),month(m),day(d){}

void Date::display() {
	cout << month << "/" << day << "/" << year << endl;
}

Date::~Date()
{
}


// Time1类的成员函数定义
Time1::Time1(int h, int m, int s) :hour(h), minute(m), sec(s)
{
}

Time1::~Time1()
{
}

void Time1::display(Date& d) {
	d.display();
	cout << hour << ':' << minute << ':' << sec;
}

void Time1::display() {
	cout << hour << ':' << minute << ':' << sec;
}	


