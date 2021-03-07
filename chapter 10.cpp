#include "my_class.h"

// 这里不能为引用，否则不能实现int->Complex的隐式转换
Complex operator + (Complex c1, Complex c2) {
	return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

istream& operator >> (istream& in, Matrix23& m) {
	for (int i = 0; i < 2; ++i)
		for (int j = 0; j < 3; ++j)
			in >> m.data[i][j];
	return in;
}

ostream& operator << (ostream& out, Matrix23& m) {
	cout << endl;
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 3; ++j)
			out << setw(4) << m.data[i][j];
		out << endl;
	}
	return out;
}

Matrix23 operator + (Matrix23& m1, Matrix23& m2) {
	Matrix23 tmp;
	for (int i = 0; i < 2; ++i)
		for (int j = 0; j < 3; ++j)
			tmp.data[i][j] = m1.data[i][j] + m2.data[i][j];
	return tmp;
}
void Code10_3();
void Code10_4();
void Code10_6();
void Code10_7();

int main() {
	//Code10_3();
	//Code10_4();
	//Code10_6();
	Code10_7();


	return 0;
}

void Code10_3() {
	Complex c1(3, 4), c2(5, -10), c3;
	int i = 5;
	c3 = c1 + c2;
	cout << "c1+c2=";
	c3.display();
	c3 = Complex(i) + c1;  // 因为我这里同时实现了double->Complex和Complex->double
	cout << "i+c1=";       // 造成了二义性，double+double还是Complex+Complex
	c3.display();
	c3 = c1 + Complex(i);
	cout << "c1+i=";
	c3.display();
}

void Code10_4() {
	Matrix23 a, b, c;
	cout << "请输入2*3的矩阵a：\n";
	cin >> a;
	cout << "请输入2*3的矩阵b：\n";
	cin >> b;
	cout << "矩阵a为：" << a;
	cout << "矩阵b为：" << b;
	c = a + b;
	cout << "a+b = " << c;
}

void Code10_6() {
	Complex c1(3, 4), c2;
	double d1;
	d1 = 2.5 + double(c1);  // 因为我这里同时实现了double->Complex和Complex->double
	                        // 造成了二义性，double+double还是Complex+Complex
	cout << "d1 = " << d1 << endl;
	c2 = Complex(d1);
	cout << "c2 = " << c2 << endl;
	c2.display();
}

void Code10_7() {
	Teacher t1("1001", "Li", "man", "语文老师"), t2;
	Student1 s1("2001", "Wang", "woman");
	cout << "student1: \n";
	s1.display();
	t2 = Teacher(s1);
	cout << "teacher2: \n";
	t2.display();
}