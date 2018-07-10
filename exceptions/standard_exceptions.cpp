#include <iostream>
using namespace std;

class canGoWrong{
	public:
		canGoWrong(){
			char *pMemory = new char[99999999999999999];	// try to allocate huge amounts of memory
			delete [] pMemory;				// leads to an exception
		}
};

int main(){
	try{	// try to catch the exception
		canGoWrong wrong;
	}
	catch(bad_alloc &e){	// catch the exception
		cout << "Error message : " << e.what() << endl;
	}
	cout << "Still running" << endl;

	return 0;
}
