#pragma warning(disable:4996)
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <stack>
#include <algorithm>
#include <vector>
using namespace std;
const int kSize = 3;
void smallest_string(char ch[][30], int n);
void Code5_1(int);
void Code5_2(int[], int);
void Code5_4(int[], int);
void Code5_5_1(int[], int);
void Code5_5_2(int[], int);
void print_array(int*, int);
void Code5_6(int);
void Code5_7(int a[4][5]);
void Code5_8(int[], int, int);
void Code5_9(int, int, int);

int main5() {
	//int a[7] = { 11,1,4,5,55,23 };
	////Code5_1(100);
	//Code5_2(a, 6);
	//print_array(a, 6);
	//Code5_4(a, 7);
	//print_array(a, 7);
	//Code5_5_2(a, 7);
	//print_array(a, 7);
	//Code5_6(10);
	//int a[4][5];
	//for (int n = 0; n < 4; ++n)
	//	for (int m = 0; m < 5; ++m)
	//		cin >> a[n][m];
	//Code5_7(a);
	//int a[10] = { 12,9,7,6,5,3,-2,-14,-20,-34 };
	//Code5_8(a, 10, 6);
	Code5_9(2005, 10, 1);
	return 0;
}
void print_array(int a[], int n) {	
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
	cout << endl;
}
void smallest_string(char str[][30], int n) {
	char string[30];
	strcpy_s(string, 30, str[0]);
	for (int i = 1; i < n; ++i)
		if (strcmp(string, str[i]) > 0)
			strcpy_s(string, 30, str[i]);
	cout << string << endl;
}

// 查找1~n之间的素数
void Code5_1(const int n) {
	int* num;
	num = new int[n];
	for (int i = 0; i < n; ++i)
		num[i] = i+1;
	num[0] = 0; // 挖掉第一个数

	for (int i = 2; i <= sqrt(n); ++i)
		for (int j = 2 * i; j <= n; j += i)  // 找到未被挖掉的倍数
			if (num[j-1])  // j放在num[j-1]中
				num[j-1] = 0;
	for (int i = 0; i < n; ++i)
		if (num[i])
			cout << num[i] << endl;
	delete[]num;
}

void Code5_2(int a[], int n) {
	int flag;
	for (int i = 0; i < n - 1; ++i) {
		flag = i;
		for (int j = i + 1; j < n; ++j)
			if (a[j] < a[flag])
				flag = j;

		int t = a[i];
		a[i] = a[flag];
		a[flag] = t;
	}
}

// 数组大小为n，原来有n-1个数
void Code5_4(int a[], int n) {
	cout << "输入插入整数：";
	int num;
	cin >> num;
	for (int i = n - 2; i >= 0; --i) {
		if (num > a[i]) {
			a[i + 1] = num;
			break;
		}
		else
			a[i + 1] = a[i];
	}
}

// 使用栈
void Code5_5_1(int a[], int n) {
	stack<int> st1;
	for (int i = 0; i < n; ++i)
		st1.push(a[i]);

	for (int i = 0; i < n; ++i) {
		a[i] = st1.top();
		st1.pop();
	}
}

// 不使用栈
void Code5_5_2(int a[], int n) {
	int tmp;
	for (int i = 0; i < n/2; ++i) {  // 注意条件是 i < n/2
		//tmp = a[i];
		//a[i] = a[n - 1 - i];
		//a[n - 1 - i] = tmp;
		swap(a[i], a[n - 1 - i]);
	}
}

void Code5_6(int n) {
	int *last_line, *current_line;
	last_line = new int[n + 1];
	current_line = new int[n + 1];
	current_line[1] = last_line[1] = 1;
	cout << setw(5) << 1 << endl;  // 打印第一行
	for (int i = 2; i <= n; ++i) {  // 从第2行打印到第n行
		cout << setw(5) << 1;  // 打印第一个元素
		for (int j = 2; j < i; ++j) {
			current_line[j] = last_line[j - 1] + last_line[j];
			cout << setw(5) << current_line[j];  // 打印中间的元素
		}
		current_line[i] = 1;
		cout << setw(5) << current_line[i] << endl;  // 打印第i行最后一个元素，并换行

		for (int j = 2; j <= i; ++j)
			last_line[j] = current_line[j];  // 更新last_line

	}
	delete[]last_line;
	delete[]current_line;
}

// 鞍点：行最大，列最小
void Code5_7(int a[4][5]) {
	int max, col;
	bool flag;
	for (int i = 0; i < 4; ++i) {
		flag = true;
		max = a[i][0];
		col = 0;
		for (int j = 1; j < 5; ++j) {
			if (max < a[i][j]) {
				max = a[i][j];
				col = j;
			}
		}
		for (int j = 0; j < 4; ++j) {
			if (max > a[j][col]) {  // 不是该列最小的元素，提前结束循环
				flag = false;
				break;
			}
		}
		if (flag) {
			for (int n = 0; n < 4; ++n) {
				for (int m = 0; m < 5; ++m)
					cout << setw(3) << a[n][m];
				cout << endl;
			}
			cout << "鞍点是a[" << i+1 << "][" << col+1 << "]";
			return;
		}
	}
	if (!flag)
		cout << "无鞍点";
	return ;
}

// 折半查找，数组从大到小排列
void Code5_8(int a[], int n,int num) {
	int left = 0, right = n - 1, mid;
	bool flag = false;
	while (left <= right) {  // 注意这里不是<
		mid = (right + left) / 2;
		if (a[mid] == num) {
			flag = true;
			break;
		}
		a[mid] < num ? right = mid - 1 : left = mid + 1;
	}
	if (flag)
		cout << num << "是第" << mid + 1 << "个元素" << endl;
	else
		cout << "查无此数！" << endl;
}

void Code5_9(int year, int month, int day) {
	int months[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int sum_days = 0;
	for (int i = 0; i < month - 1; ++i)
		sum_days += months[i];
	if (month > 2)
		!(year % 4) && (year % 100) || !(year % 400) ? sum_days++ : sum_days;
	sum_days += day;
	cout << year << "/" << month << "/" << day << " 是" << year << "年的第" << sum_days << "天。\n";
}