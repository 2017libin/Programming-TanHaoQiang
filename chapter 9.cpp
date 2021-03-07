//#pragma warning(disable:4996)
#include "my_class.h"

void Code9_4();
void Code9_5(const Student* p, int n);
void Code9_9();
void Code9_10();
void Code9_11();
void Code9_12();
double Good::sum = 0;
double Good::count = 0.95;
int Good::num = 0;

int main9() {
	//cout << "执行main函数" << endl;
	//Time t1(3);
	//Time t2 = t1;
	// Time const * p;
	//p = &t2;
	//t2.set_time();
	//p->set_time();
	//Code9_4();
	//Code9_9();
	//Code9_10();
	//Code9_11();
	Code9_12();
	return 0;
}

void Code9_4() {
	Student student[5];
	Student* p = student;
	for (int i = 0; i < 5; i += 2)
		p[i].display();  // (p+i)->display();
}

void Code9_5(const Student* p,int n) {
	const Student* best = p;
	for (int i = 1; i < n; ++i)
		if (best->score < (p + i)->score)
			best = p + i;
	cout << "成绩最高学生的学号为：" << best->no << endl;
}

void Code9_9() {
	SalePerson p[3]; 
	for (int i = 0; i < 3; ++i)
		p[i].total();  // 结算所有售货员卖出去的东西
	Good::display();
}

void display(Date& d, Time1& t) {
	d.display();
	t.display();
}
void Code9_10() {
	Time1 t1(10, 13, 56);
	Date d1(12, 25, 2004);
	display(d1, t1);
}

void Code9_11() {
	Time1 t1(10, 13, 56);
	Date d1(12, 25, 2004);
	t1.display(d1);
}

void Code9_12() {
	Compare<int>cmp1(3, 7);
	cout << cmp1.max() << "是两个整数中较大的一个\n";
	cout << cmp1.min() << "是两个整数中较小的一个\n";
	Compare<float>cmp2(45.78, 96.3);
	cout << cmp2.max() << "是两个float型浮点数中较大的一个\n";
	cout << cmp2.min() << "是两个float型浮点数中较小的一个\n";
}