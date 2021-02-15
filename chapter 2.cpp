#include <iostream>
using namespace std;

void test2() {
#define PRICE 30
	const int price = 30;
	cout << price << endl;
	cout << sizeof(PRICE) << endl;
	cout << PRICE << endl;
	char ch = 'a';
	ch -= 32;  // 将ch转换为小写
	int i = -1;
	unsigned int j = i;
	cout << j << endl;
	int a, b, c;
	a = b = c = 1;
	cout << a << b << c << endl;
	cout << (a=5)<<a++ << a << endl;
	cout << (a = 4 * 5, a * 2) << endl; // 逗号表达式的值为表达式2的值
}                                       // 赋值运算符优先级高于逗号运算符
int main2() {
	test2();
	return 0;
}