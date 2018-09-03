#include <iostream>
#include <vector>
using namespace std;

class Test {
	int size;
	char* _pbuffer;
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
	~Test() {
		delete[] _pbuffer;
	}
};
int main() {
	vector<Test> vec;
	vec.push_back(Test(25));

	return 0;
}