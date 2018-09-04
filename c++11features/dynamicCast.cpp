#include<iostream>
using namespace std;

class base
{
public:
	virtual void speak(){
		cout << "base!" << endl;
	}
};

class derived:public base
{
	// empty derived class
};

int main()
{
	base *bptr;
	derived *dptr;
	base b;
	derived d;

	// dynamic cast is a runtime feature
	// type casting is done at runtime
	// main difference with static cast is that it protects from
	// doing illegal type casts that could be a problem
	bptr = &b;
	dptr = dynamic_cast<derived *>(bptr);

	if (dptr == nullptr){
		cout << "Invalid cast" << endl;
	}else{
		cout << bptr << endl;
	}
	return 0;
}
