#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <stack>
#include <algorithm>
#include <vector>
using namespace std;

// ��������

bool Code4_3(int);
int fac(int);
void Code4_4();
void Code4_7(int);
void Code4_10(int);
int Code4_11(int);
void Code4_9(char, char, char, int);  // ��ŵ������
void Code4_12();
int main() {
	for (int i = 8; i < 100; i += 2) {
		//if (Code4_3(i))
		   //cout << i << "�Ľ׳��� �� " << fac(i) << endl;
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
	cout << "������a��b��c" << endl;
	cin >> a >> b >> c;
	cout << "fac(a) + fac(b) + fac(c) = " << fac(a) + fac(b) + fac(c) << endl;
}

bool gotbaha(int n) {
	for (int i = 3; i <= n / 2; i += 2) {
		if (Code4_3(i) && Code4_3(n - i)) {  // Code4_3(n)���ж�n�ǲ�������
			//cout << n << " = " << i << " + " << n - i;
			return true;
		}
	}
	return false;
}
void Code4_7(int i) {
	int n;
	//cout << "������һ������6��ż����";
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

// ��n�����Ӵ�a�Ƶ�c
void Code4_9(char a, char b, char c, int n) {
	if (n > 1) {
		Code4_9(a, c, b, n - 1);  // �Ƚ�n-1�������ƶ���b
		cout << a << " -> " << c << endl;  // �ٽ����һ�������ƶ���c
		Code4_9(b, a, c, n - 1);  // ��b�����n-1�������ƶ���b
	}
	else
		cout << a << " -> " << c << endl;  // ֻʣ��һ�����ӣ�ֱ���Ƶ�c
}

#define S(a,b,c) (a+b+c)/2  // û�зֺ�
#define AREA(a,b,c) sqrt(S(a,b,c)*(S(a,b,c)-a)*(S(a,b,c)-b)*(S(a,b,c)-c))

void Code4_12() {
	int a, b, c;
	cout << "������������a��b��c:\n";
	cin >> a >> b >> c;
	cout << "�����ε����Ϊ��" << AREA(a, b, c) << endl;
}