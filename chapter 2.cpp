#include <iostream>
using namespace std;

void test2() {
#define PRICE 30
	const int price = 30;
	cout << price << endl;
	cout << sizeof(PRICE) << endl;
	cout << PRICE << endl;
	char ch = 'a';
	ch -= 32;  // ��chת��ΪСд
	int i = -1;
	unsigned int j = i;
	cout << j << endl;
	int a, b, c;
	a = b = c = 1;
	cout << a << b << c << endl;
	cout << (a=5)<<a++ << a << endl;
	cout << (a = 4 * 5, a * 2) << endl; // ���ű��ʽ��ֵΪ���ʽ2��ֵ
}                                       // ��ֵ��������ȼ����ڶ��������
int main2() {
	test2();
	return 0;
}