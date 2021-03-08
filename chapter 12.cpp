#include "chapter 12.h"

void Code12_4() {
	Shape* p;
	Circle c(3);
	Rectangle r(2, 3);
	Triangle t(3, 4, 5);
	p = &c;
	p->printArea();
	p = &r;
	p->printArea();
	p = &t;
	p->printArea();
}
		
int main() {
	Code12_4();
	return 0;
}