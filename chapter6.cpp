//#pragma warning(disable:4996)
#include<iostream>
#include<iomanip>
#include<cmath>
#include<stack>
#include <vector>
#include <string>
using namespace std;

void Code6_4(int* a, int n, int m);
void Code6_2(string*, int);
void Code6_2(char[][20], int);
int Code6_5(int);
void Code6_7(char *p1, char *p2, int);
void Code6_9(int p[3][3], int);
double Code6_13(double(*p)(double), int n);
double fsin(double);
double fcos(double);
double fexp(double);
void Code6_10(int[5][5]);
void Code6_16(string);
int main() {
	//int a[5];
	//for (int i = 0; i < 5; ++i)
	//	cin >> a[i];
	//Code6_4(a, 5, 2);
	//for (int i = 0; i < 5; ++i)
	//	cout << a[i] << " ";
	//char strs[3][20];
	//for (int i = 0; i < 3; ++i)
	//	cin >> strs[i];
	//Code6_2(strs, 3);
	//for (int i = 0; i < 3; ++i)
	//	cout << strs[i] << endl;
	//cout << Code6_5(8);
	//char p1[20], p2[20];
	//cin.getline(p1, 20);
	//Code6_7(p1, p2, 3);
	//cout << p2;
	//int a[3][3];
	//for (int i = 0; i < 3; ++i)
	//	cin >> a[i][0] >> a[i][1] >> a[i][2];
	//Code6_9(a, 3);
	//for (int i = 0; i < 3; ++i) {
	//	for(int j = 0; j < 3; ++j)
	//		cout << setw(4) << a[i][j];
	//	cout << endl;
	//}
	//double (*func)(double);
	//func = fsin;
	//cout << Code6_13(func, 20);
	//cout << func(0) << endl;
	//cout << (*func)(0);
	//int a[5][5];
	//for (int i = 0; i < 5; i++)
	//	for (int j = 0; j < 5; ++j)
	//		cin >> a[i][j];
	//Code6_10(a);
	//for (int i = 0; i < 5; ++i) {
	//	for (int j = 0; j < 5; ++j)
	//		cout << setw(4) << a[i][j];
	//	cout << endl;
	//}
	string str = "hh123.!fsa12a1230";
	Code6_16(str);
	return 0;
}

// ��n����������a����m��
void Code6_4(int* a, int n, int m) {
	if (m > 0) {
		int tmp = a[n - 1];  // ����һ����
		for (int i = n - 1; i > 0; --i)
			a[i] = a[i - 1];
		a[0] = tmp;
		Code6_4(a, n, m - 1);  // ��������m-1����
	}
}

// ��n���ַ�����С�����������
void Code6_2(string* strs, int n) {
	for (int i = 0; i < n-1; ++i) {
		int min = i;
		for (int j = i + 1; j < n; ++j) {
			if (strs[min] > strs[j])
				min = j;
		}
		swap(strs[i], strs[min]);
	}
}

void Code6_2(char strs[][20], int n) {
	for (int i = 0; i < n - 1; ++i) {
		int min = i;
		for (int j = i + 1; j < n; ++j) {
			if (strcmp(strs[min],strs[j])>0)
				min = j;
		}
		swap(strs[i], strs[min]);
	}
}

int Code6_5(int n) {
	int count = n;  // count��ʾ��ʣ�¶��ٸ���
	int flag = 0;  // flag��ʾ��ǰ�����ĺ���
	int* a = new int[n];
	for (int i = 1; i < n; ++i)
		a[i] = 1;
	// ���ʣ�µ���������1
	while (count > 1) {
		while (!a[flag])
			flag = (flag + 1) % n;  // �ҵ���һ��û����̭����
		flag = (flag + 1) % n;  // ��һ���˱���
		while (!a[flag])
			flag = (flag + 1) % n; // �ҵ��ڶ���û����̭����
		flag = (flag + 1) % n;  // �ڶ����˱���
		while(!a[flag])
			flag = (flag + 1) % n;  // �ҵ�������û����̭����
		a[flag] = 0;  // ����������̭
		count--;  // ʣ�µ�������һ
	}
	int last;
	for (int i = 0; i < n; ++i)
		if (a[i]) {
			last = i + 1;  // a[i]�ǵ�i+1����
			break;
		}
	delete[]a;
	return last;
}

void Code6_7(char *p1, char *p2, int m) {
	int size1 = 0;
	int size2 = 0;
	while (p1[size1])size1++;  // ���p1�ĳ���

	for (int i = m - 1; i < size1; ++i)  // �ӵ�m��Ԫ�ؿ�ʼ����
		p2[size2++] = p1[i];

	p2[size2] = 0;  // ���һ���ַ�Ϊ���ַ�
}

void Code6_9(int p[3][3], int n) {
	for (int i = 0; i < n - 1; ++i)
		for (int j = i + 1; j < n; ++j)
			swap(p[i][j], p[j][i]);
}
double fsin(double x) {
	return sin(x);
}
double fcos(double x) {
	return cos(x);
}
double fexp(double x) {
	return exp(x);
}
double Code6_13(double (*p)(double), int n) {
	double sum = 0;
	double width = 1.0 / n;
	//cout << width << endl;
	for (double i = 0; i < n; ++i)
		sum = sum + p(i/n) * width;
	return sum;
}

void Code6_10(int a[5][5]) {
	int max, min, min_x, min_y,max_x,max_y;
	min_x = min_y = max_x = max_y = 0;
	for(int i =0; i < 5; ++i)  // �ҵ���С��Ԫ��
		for (int j = 0; j < 5; ++j) {
			if (a[min_x][min_y] > a[i][j]) {
				min_x = i;
				min_y = j;
			}
		}
	swap(a[min_x][min_y], a[0][0]);

	for(int i = 0; i < 5; ++i)  // �ҵ����Ԫ��
		for(int j = 0; j < 5; ++j)
			if (a[max_x][max_y] < a[i][j]) {
				max_x = i;
				max_y = j;
			}
	swap(a[max_x][max_y], a[2][2]);

	for (int n = 0; n < 3; ++n) {  // �ҵ�ʣ�µ�������С��
		min_x = 0;  // ��ʼ��
		min_y = 1;
		for(int i = 0; i < 5; ++i)
			for (int j = 0; j < 5; ++j) {
				if (a[min_x][min_y] > a[i][j]) {
					if (n == 0 && !(i == 0 && j == 0)) {  // �ڶ�����С�㲻�ܺ͵�һ����ͬ
						min_x = i;
						min_y = j;
					}
					if (n == 1 && !(i == 0 && j == 0) && !(i == 0 && j == 4)) {  // ��������С�㲻�ܺ͵�һ���͵ڶ�����ͬ
						min_x = i;
						min_y = j;
					}
					if (n == 2 && !(i == 0 && j == 0) && !(i == 0 && j == 4) && !(i == 4 && j == 0)) {  // ���ĸ���С�㲻�ܺ�...��ͬ
						min_x = i;
						min_y = j;
					}
				}
			}
		if (n == 0)
			swap(a[min_x][min_y], a[0][4]);
		else if (n == 1)
			swap(a[min_x][min_y], a[4][0]);
		else
			swap(a[min_x][min_y], a[4][4]);
	}
}

void Code6_16(string str) {
	int i = 0;
	int* num = new int[str.size()/2+1];  // ������ݵ�����
	for (int i = 0; i < str.size() / 2 + 1; ++i)
		num[i] = 0;
	int count = 0;  // ��¼���ֵĸ���
	while (str[i]) {
		if (str[i] >= '0' && str[i] <= '9') {
			while (str[i] >= '0' && str[i] <= '9')
				num[count] = 10 * num[count] + str[i++]-'0';
			count++;
		}
		else i++;
	}
	cout << "���ֵĸ���Ϊ��" << count << endl;
	for (int i = 0; i < count; ++i)
		cout << num[i] << " ";
	delete[]num;
}