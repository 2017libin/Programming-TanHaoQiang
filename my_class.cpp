#include "my_class.h"

// Time��ĳ�Ա��������
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
	cout << "����Ĭ�Ϲ��캯��" << flag << endl;
}

Time::~Time()
{
	cout << "��������������" << flag << endl;
}

// Student��ĳ�Ա��������

Student::Student()
{
	cout << "������ѧ����ѧ�š������ͳɼ���";
	cin >> no >> name >> score;
}

Student::~Student()
{
}

void Student::display() {
	cout << setw(10) << no << setw(8) << name << setw(5) << score << endl;;
}


// Good��ĳ�Ա��������
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
	cout << "��Ʒ����������Ϊ��" << num << endl;
	cout << "��Ʒ�����Ľ��Ϊ��" << sum << endl;
	cout << "ƽ��ÿ���۸�Ϊ��" << average();
}

SalePerson::SalePerson() {
	cout << "����������Ա��š����������Լ����۵���: ";
	cin >> no >> product_num >> product_price;
}

void SalePerson::total() {
	double c;  // ����
	Good::num += product_num;
	product_num > 10 ? c = Good::count * 0.98 : c = Good::count;
	Good::sum += product_num * product_price * c;
}


// Date��ĳ�Ա��������
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


// Time1��ĳ�Ա��������
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


// Complex��ĳ�Ա��������
void Complex::display() {
	if (imag > 0)
		cout << real << '+' << imag << 'i' << endl;
	else if (imag < 0)
		cout << real << imag << 'i' << endl;
	else
		cout << endl;
}

// Matrix23��ĳ�Ա��������
Matrix23::Matrix23()
{
	for (int i = 0; i < 2; ++i)
		for (int j = 0; j < 3; ++j)
			data[i][j] = 0;
}

Matrix23::~Matrix23()
{
}

// Student1��ĳ�Ա��������
Student1::Student1() {
	name = "����";
	num = "0000";
	sex = "man";
}

void Student1::display() {
	cout << num << "  " << name << "  " << sex << endl;
}

// Teacher��ĳ�Ա��������
Teacher_::Teacher_() {
	name = "����";
	num = "0000";
	sex = "man";
	title = "������ʦ";
}

Teacher_::Teacher_(Student1& s) {
	num = s.num;
	name = s.name;
	sex = s.sex;
	title = "������ʦ";
}

void Teacher_::display() {
	cout << num << "  " << name << "  " << sex << "  " << title << endl;
}