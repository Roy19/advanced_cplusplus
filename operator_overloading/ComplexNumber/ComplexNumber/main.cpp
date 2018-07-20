#include "complex.h"


// test cases
int main(int argc, char *argv[]) {
	complex c1(2.0, 3.0);
	complex c2(2.0, 3.0);
	complex c3(2.6, 1.2);
	
	c3 = c3 - c1;

	cout << "c3 - c1 = " << c3 << endl;
	cout << "c3 + c1 + c2 = " << c3 + c1 + c2 << endl;
	cout << "c2 = " << c2 << endl;

	if (c1 == c2)
		cout << "c1 equals c2" << endl;
	else
		cout << "c1 not equals c2" << endl;

	if (c1 != c3)
		cout << "c1 not equals c3" << endl;
	else
		cout << "c1 equals c3" << endl;

	return 0;
}