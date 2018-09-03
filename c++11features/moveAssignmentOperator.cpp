#include <iostream>
#include <vector>
using namespace std;

class Test {
	int size;
	char* _pbuffer {nullptr};
public:
	Test() {
		size = 0;
		_pbuffer = nullptr;
	}
	Test(int i): size(i) {
		_pbuffer = new char[size];
	}
	Test(Test &&other){
		// actual move constructor
		cout << "Move constructor" << endl;
		// steels the resource of another object
		// and uses it as it's own

		_pbuffer = other._pbuffer;

		// set the other._pbuffer to null as then
		// the stolen resource is not deallocated by
		// the destructor after the lifetime of the r value
		other._pbuffer = nullptr;
	}
	Test &operator=(Test &&other){
		// this is the move assignment operator
		cout << "Move assignment operator" << endl;
		// delete any memory it has allocated
		delete [] _pbuffer;
		// point to the other buffer to steal
		_pbuffer = other._pbuffer;
		// set the other buffer to null
		other._pbuffer = nullptr;
	}
	~Test() {
		delete [] _pbuffer;
	}
};

Test getTest(){
	return Test();
}

int main() {
	vector<Test> vec;
	vec.push_back(Test(25));

	Test t = getTest();	// invokes copy constructor
	Test t1;

	t1 = getTest();		// invokes move assignment

	return 0;
}