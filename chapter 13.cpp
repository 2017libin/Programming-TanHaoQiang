#include <fstream>
#include <iostream>
#include <strstream>
using namespace std;

struct student
{
	int num;
	char name[20];
	float score;
};
int main() {
	student stud[3] = { {1001,"Li",18},{1002,"Wang",89.5},{1003,"Fang",90} };
	char c[50];  
	ostrstream strout(c, 10);  // 关联字符串流对象到c[50]
	for (int i = 0; i < 3; i++)
		strout << stud[i].num << stud[i].name << stud[i].score;
	strout << ends;  // ends是C++的IO操作符，插入一个'\0'
	cout << c;  // 1001Li181002Wang89.51003Fang90
	return 0;
}