#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <stack>
#include <algorithm>
#include <vector>

using namespace std;

#define PI acos(-1)
//void Test3();
void Code3_2();
void Code3_9();
void Code3_11();
void Code3_12(int);
void Code3_14();
void Code3_15();
void Code3_16();
void Code3_20();
void Code3_22();
void Code3_24();
void Code3_25();
int gcd(int,int);
int main3() {
	// 初始化随机种子
	srand(time(NULL));
	//IOFlags();
	//Test3();
	//cout << RAND_MAX << endl;
	//for (int i = 0; i < 3; ++i) {
	//	Code3_12(rand() % 1000);
	//}
	Code3_24();
	return 0;
}

void Code3_2() {
	double radius, high;
	cin >> radius >> high;
	cout << setiosflags(ios::fixed) << setprecision(2);
	cout << "圆面积为：" << radius * powf(PI,2);
	cout << "球体积为：" << 4 / 3.0 * PI * powf(radius, 3);
}

void Code3_9() {
	int a, b, c;
	cin >> a >> b >> c;
	int max = a;
	max = (max < b) ? b : max;
	max = (max < c) ? c : max;
	cout << "the max number is " << max << endl;
}

void Code3_11() {
	double score;
	char level;
	cin >> score;
	while (score < 0 || score>100) {
		cout << "输入成绩有误，请重新输入（0-100）：";
		cin >> score;
	}
	switch (int(score/10)) {
	  case 10:
	  case 9: level = 'A'; break;
	  case 8: level = 'B'; break;
	  case 7: level = 'C'; break;
	  case 6: level = 'D'; break;
	  default: level = 'E';
	}
	cout << score << "分等级为：" << level << endl;
}

void Code3_12(int num1) {
	int num = num1;
	int count=1;  // 记录位数
	int tmp = num;
	stack<int> stack1;  // 借助栈来实现逆序输出
	while (tmp /= 10) count++;
	cout << num << "位数为：" << count << endl;
  	cout << num << "每一位数为：\n";
	while (count--) {
		int flag = int(num / pow(10, count)) % 10;
		cout << flag << endl;;
		stack1.push(flag); 
	}
	cout << num << "逆序为：";
	while (!stack1.empty()) {
		cout << stack1.top();
		stack1.pop();
	}
}

void Code3_14() {
	vector<int> arr;
	srand(time(NULL));
	for (int i = 0; i < 10; ++i)
		arr.push_back(rand()%100);

	for (int i = 0; i < arr.size(); ++i)
		cout << arr[i] << " ";
	cout << endl;
	
	// 冒泡排序
	for(int i = 0;i < arr.size()-1; ++ i)
		for (int j = 0; j < arr.size() - 1 - i; ++j) {
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
		}

	for (int i = 0; i < arr.size(); ++i)
		cout << arr[i] << " ";
	cout << endl;
}
void Code3_15() {
	int n, m;
	cin >> n >> m;
	if (n > m)
		swap(n, m);
	int hcf = gcd(n, m);
	int lcd = n * m / hcf;
	cout << "最大公约数为：" << hcf;
	cout << "\n最小公倍数为：" << lcd;
}

// n<m
int gcd(int n, int m) {  
	return (!n) ? m : gcd(m % n, n);
}	

void Code3_16() {
	char c;
	int letter_num, number_num, space_num, others_num;
	letter_num = number_num = space_num = others_num = 0;
	while ((c = getchar()) != '\n') {
		if ((c >= 'a' && c < 'z') || (c >= 'A' && c <= 'Z'))
			++letter_num;
		else if (c == ' ')
			++space_num;
		else if (c >= '0' && c <= '9')
			++number_num;
		else
			others_num++;
	}
	cout << "字母个数为：" << letter_num << endl
		<< "数字个数为：" << number_num << endl
		<< "空格个数为：" << space_num << endl
		<< "其他字符个数为：" << others_num << endl;
}

void Code3_20() {
	vector<int> factors;
	int sum;
	for (int i = 2; i <= 1000; ++i) {
		sum = 0;
		factors.clear();
		for (int j = 1; j < i; ++j) {
			if (!(i % j)) {
				sum += j;
				factors.push_back(j);
			}
		}
		if (sum == i) {
			cout << i << ",its factorss are ";
			for (int k = 0; k < factors.size(); ++k)
				cout << factors[k] << " ,";
			cout << factors[factors.size() - 1] << endl;
		}
	}
}

void Code3_22() {
	int num = 1;
	for (int day = 9; day > 0; --day)
		num = 2 * (num + 1);  // 前一天的水果数量时今天水果数量加1乘以2
	cout << num << endl;
}

void Code3_24() {
	int n;
	cin >> n;
	cout << setiosflags(ios::left);
	for (int i = 1; i < (n + 1) / 2; ++i) {
		for (int j = 0; j < 2 * i - 1; ++j)
			cout << setw(3) << "*";
		cout << endl;
	}
	for (int i = (n + 1) / 2; i < n; ++i) {
		for (int j = 0; j < 2 * (n + 1 - i) - 1; ++j)
			cout << setw(3) << "*";
		cout << endl;
	}
	cout << setw(3) << "*";
}

void Code3_25() {
	// i, j, k 分别为A, B, C的对手
	for (int i = 'X'; i <= 'Z'; ++i)
		for (int j = 'X'; j <= 'Z'; ++j)
			if (i != j)
				for (int k = 'X'; k <= 'Z'; ++k)
					if (k != i && k != j)
						if (i != 'X' && k != 'X' && k != 'Z')
							cout << "A--" << i << "\nB--" << j << "\nC--" << k;
}