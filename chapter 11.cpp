#include "chapter11.h"

void Teacher1::display() {
	cout << "������" << name << endl;
	cout << "���䣺" << age << endl;
	cout << "�Ա�" << sex << endl;
	cout << "��ַ��" << addr << endl;
	cout << "�绰��" << phone << endl;
	cout << "ְ�ƣ�" << title << endl;
}
void Cadre::display() {
	cout << "������" << name << endl;
	cout << "���䣺" << age << endl;
	cout << "�Ա�" << sex << endl;
	cout << "��ַ��" << addr << endl;
	cout << "�绰��" << phone << endl;
	cout << "ְ��" << post << endl;
}

void Teacher_Cadre::show() {
	Teacher1::display();  
	cout << "ְ��" << post << endl;
	cout << "���ʣ�" << wage << endl;
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