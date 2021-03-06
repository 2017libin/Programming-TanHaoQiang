//#pragma warning(disable:4996)
#include<iostream>
#include<iomanip>
#include<cmath>
#include<stack>
#include <vector>
#include <string>

using namespace std;


struct Date
{
	int year;
	int month;
	int day;
	Date* next;
};

int Code7_2(Date);
Date* Code7_6();
void Code7_11();
int main7() {
	//Date d = { 2008,10,1 };
	//int days = Code7_2(d);
	//cout << days << endl;
	//Date* head = Code7_6();
	//while (head->next) {
	//	head = head->next;
	//	cout << head->year << "/" << head->month << "/" << head->day << endl;
	//}
	Code7_11();
	return 0;
}

int Code7_2(Date d) {
	int month[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int sum = 0;
	for (int i = 0; i < d.month-1; ++i)
		sum += month[i];
	if (d.month > 2)
		if ((!(d.year % 4) && d.year % 100) || !(d.year % 400))
			sum += 1;
	sum += d.day;
	return sum;
}

Date* Code7_6() {
	int flag;
	Date* head = new Date{ 0,0,0,0 };
	Date * pre = head;
	Date* current = head;
	cin >> flag;
	while (flag) {  // 输入0表示结束输入
		current->next = new Date;  // 申请一个新的节点并且指向新节点
		current = current->next;
		current -> year = flag;
		cin >> current->month >> current->day;
		current->next = NULL;  // 当前新节点为最后一个节点

		cin >> flag;
	}
	return head;
}

void Code7_11() {
	enum Day {Sunday = 7, Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday};
	int f = Thursday;
	enum Doctor {A,B,C,D,E,F,G};
	for (int a = Monday; a <= Sunday; ++a) {
		for (int c = Monday; c <= Sunday; ++c)
			if (c + 1 == a && a != f && c > f)  // F在B和C之间且F在Thursday
				for (int d = Monday; d <= Sunday; ++d)
					if (d != a && d != c && d != f)
						for (int e = Monday; e <= Sunday; ++e)
							if (e + 2 == d && e != d && e != a && e != c && e != f)
								for (int b = Monday; b <= Sunday; ++b)
									if (b != a && b != c && b != d && b != e && b < f)
										for (int g = Monday; g <= Sunday; ++g)
											if (b + 3 == g && g != b && g != a && g != c && g != d && g != e && g != f) {
												cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << " " << g << endl;
												for (int loop = A; loop <= G; ++loop) {  // 依次输出教授A~F的工作时间
													Day workday;
													cout << "Doctor " << char('A' + loop) << "：";
													switch (Doctor(loop))  // 获取教授工作时间
													{
													case A:
														workday = Day(a);
														break;
													case B:
														workday = Day(b);
														break;
													case C:
														workday = Day(c);
														break;
													case D:
														workday = Day(d);
														break;
													case E:
														workday = Day(e);
														break;
													case F:
														workday = Day(f);
														break;
													case G:
														workday = Day(g);
														break;
													default:
														break;
													}
													switch (workday)  // 输出工作时间
													{
													case Sunday:
														cout << "Sunday\n";
														break;
													case Monday:
														cout << "Monday\n";
														break;
													case Tuesday:
														cout << "Tuesday\n";
														break;
													case Wednesday:
														cout << "Wednesday\n";
														break;
													case Thursday:
														cout << "Thursday\n";
														break;
													case Friday:
														cout << "Friday\n";
														break;
													case Saturday:
														cout << "Saturday\n";
														break;
													default:
														break;
													}

												}
											}
												
										
													
							
	}
}