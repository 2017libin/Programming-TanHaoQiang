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


void test4() {
	cout << "from chapter 4.cpp\n";
	int a = 1;
}

