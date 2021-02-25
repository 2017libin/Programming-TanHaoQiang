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
int main() {
	char str[kSize][30];
	for (int i = 0; i < kSize; ++i)
		cin >> str[i];
	smallest_string(str, kSize);
	return 0;
}

void smallest_string(char str[][30], int n) {
	char string[30];
	strcpy_s(string, 30, str[0]);
	for (int i = 1; i < n; ++i)
		if (strcmp(string, str[i]) > 0)
			strcpy_s(string, 30, str[i]);
	cout << string << endl;
}