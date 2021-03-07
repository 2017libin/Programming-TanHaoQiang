#include "chapter11.h"

void Teacher1::display() {
	cout << "姓名：" << name << endl;
	cout << "年龄：" << age << endl;
	cout << "性别：" << sex << endl;
	cout << "地址：" << addr << endl;
	cout << "电话：" << phone << endl;
	cout << "职称：" << title << endl;
}
void Cadre::display() {
	cout << "姓名：" << name << endl;
	cout << "年龄：" << age << endl;
	cout << "性别：" << sex << endl;
	cout << "地址：" << addr << endl;
	cout << "电话：" << phone << endl;
	cout << "职务：" << post << endl;
}

void Teacher_Cadre::show() {
	Teacher1::display();  
	cout << "职务：" << post << endl;
	cout << "工资：" << wage << endl;
}

class test {
private:string str;

};

// string n, int a, string s, string ad, string p, string po, string t, int w
int main() {
	Teacher_Cadre p("wang-li", 50, "man", "135 Beijing Road,Shanghai", "(021)61234567", "president", "prof.", 15000);
	p.show();


	return 0;
}