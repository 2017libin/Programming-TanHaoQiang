#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <stack>
#include <algorithm>
#include <vector>
using namespace std;

// 函数声明

bool Code4_3(int);
int fac(int);
void Code4_4();
void Code4_7(int);
void Code4_10(int);
int Code4_11(int);
void Code4_9(char, char, char, int);  // 汉诺塔问题
void Code4_12();
int main() {
	for (int i = 8; i < 100; i += 2) {
		//if (Code4_3(i))
		   //cout << i << "的阶乘是 ： " << fac(i) << endl;
	   //Code4_10(- rand());
	   //cout << endl;
	}
	//Code4_9('a', 'b', 'c', 3);
	Code4_12();
	return 0;
}


void test4() {
	cout << "from chapter 4.cpp\n";
	int a = 1;
}

void Code4_4() {
	int a, b, c;
	cout << "请输入a、b、c" << endl;
	cin >> a >> b >> c;
	cout << "fac(a) + fac(b) + fac(c) = " << fac(a) + fac(b) + fac(c) << endl;
}

bool gotbaha(int n) {
	for (int i = 3; i <= n / 2; i += 2) {
		if (Code4_3(i) && Code4_3(n - i)) {  // Code4_3(n)：判断n是不是素数
			//cout << n << " = " << i << " + " << n - i;
			return true;
		}
	}
	return false;
}
void Code4_7(int i) {
	int n;
	//cout << "请输入一个大于6的偶数：";
	//cin >> n;
	gotbaha(i) ? cout << "\ngotbaha is right!" : cout << "\ngotbaha is wrong!";
}
bool Code4_3(int n) {
	for (int i = 2; i <= sqrt(n); ++i)
		if (n % i == 0)
			return false;
	return true;
}


int fac(int n) {
	if (n == 1)
		return 1;
	else
		return fac(n - 1) * n;
}

void Code4_10(int n) {
	if (n < 0) {
		cout << "-";
		n = -n;
	}
	//if (n < 10) {
	//	cout << n;
	//}
	//else {
	//	Code4_10(n / 10);
	//	cout << n % 10;
	//}
	n < 10 ? cout << n : (Code4_10(n / 10), cout << n % 10);
}

int Code4_11(int n) {
	if (n == 1)
		return 1;
	else {
		return Code4_11(n - 1) + pow(n, 2);
	}
	//n == 1 ? return 1 : return Code4_11(n - 1) + pow(n, 2);
}

// 将n个碟子从a移到c
void Code4_9(char a, char b, char c, int n) {
	if (n > 1) {
		Code4_9(a, c, b, n - 1);  // 先将n-1个碟子移动到b
		cout << a << " -> " << c << endl;  // 再将最后一个碟子移动到c
		Code4_9(b, a, c, n - 1);  // 将b上面的n-1个碟子移动到b
	}
	else
		cout << a << " -> " << c << endl;  // 只剩下一个碟子，直接移到c
}

#define S(a,b,c) (a+b+c)/2  // 没有分号
#define AREA(a,b,c) sqrt(S(a,b,c)*(S(a,b,c)-a)*(S(a,b,c)-b)*(S(a,b,c)-c))

void Code4_12() {
	int a, b, c;
	cout << "请输入三条边a、b、c:\n";
	cin >> a >> b >> c;
	cout << "三角形的面积为：" << AREA(a, b, c) << endl;
}