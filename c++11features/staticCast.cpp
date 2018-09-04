#include<iostream>
using namespace std;

class base
{
	// empty class
};

class derived:public base
{
	// empty derived class
};

int main()
{
	base *bptr;
	derived *dptr;
	derived d;

	// static cast is a compile time feature
	// type casting is done at compile time
	bptr = &d;
	dptr = static_cast<derived *>(bptr);
	cout << bptr << endl;

	return 0;
}
