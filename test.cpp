#include<iostream>
#include<iomanip>
#include<cmath>
#include<stack>
#include <vector>
using namespace std;

#define PI acos(-1)

void IOFlags();
void UseStack();
void UseVector();
int main() {
	void test4();
	test4();
	return 0;
}

void UseFactor() {
	vector<int> v;
	v.push_back(1);
	v.push_back(3);
	cout << v[0] << "  " << v[1] << endl;
	cout << v.size() << endl;
	v.clear();
	cout << v.size() << endl;
	v.push_back(2);
	cout << v[0] << endl;
}
// ������������Ʒ�
void IOFlags() {
	cout << hex;
	int a = 123;
	double b = 123.456798;
	//	cout << setprecision(4);  // ���þ��ȣ���Ч����λ��
		//cout << b << endl;
	cout << setiosflags(ios::scientific);
	cout << b << endl;
	cout << setiosflags(ios::fixed) << setprecision(4);  // ����4λС��
	cout << b << endl;
	cout << setw(10);
	cout << a << endl;
	cout << setw(10) << setiosflags(ios::left);
	cout << a << endl;
	cout << "PI = " << PI << endl;
	bool flag = 123;
	cout << flag << endl;  // ���Ϊ1
	char c;
	for (; (c = getchar()) != '\n';)  // ֻ�е����»س����ŻὫ�����͵��ڴ滺����
		cout << c;                    // ����������һ���ַ���ȡһ���ַ������һ���ַ�
}

void UseStack() {
	stack<int> stack1;
	cout << stack1.size() << endl;
	stack1.push(1);
	stack1.push(2);
	stack1.push(3);
	stack1.push(4);
	cout << stack1.size() << endl;
	while (!stack1.empty()) {
		cout << stack1.top() << endl;
		stack1.pop();
	}
}