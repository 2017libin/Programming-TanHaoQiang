#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <stack>
#include <algorithm>
#include <vector>
using namespace std;

static int max(int, int);
int max(int, int, int);
// 默认参数应该在函数声明给出
int max3(int, int, int c = 1);
int main4() {
	cout << max(-1, -2) << max(1,2,4);
	return 0;
}

int max3(int a, int b, int c) {
	a = (a > b) ? a : b;
	a = (a > c) ? a : c;
	return a;
}

int max(int a, int b) {
	a = (a > b) ? a : b;
	return a;
}

int max(int a, int b, int c) {
	a = (a > b) ? a : b;
	a = (a > c) ? a : c;
	return a;
}
void test4() {
	cout << "from chapter 4.cpp\n";
	int a = 1;
}

