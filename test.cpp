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
// 输入输出流控制符
void IOFlags() {
	cout << hex;
	int a = 123;
	double b = 123.456798;
	//	cout << setprecision(4);  // 设置精度（有效数字位数
		//cout << b << endl;
	cout << setiosflags(ios::scientific);
	cout << b << endl;
	cout << setiosflags(ios::fixed) << setprecision(4);  // 保留4位小数
	cout << b << endl;
	cout << setw(10);
	cout << a << endl;
	cout << setw(10) << setiosflags(ios::left);
	cout << a << endl;
	cout << "PI = " << PI << endl;
	bool flag = 123;
	cout << flag << endl;  // 输出为1
	char c;
	for (; (c = getchar()) != '\n';)  // 只有当按下回车键才会将输入送到内存缓冲区
		cout << c;                    // 并不是输入一个字符读取一个字符（输出一个字符
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
