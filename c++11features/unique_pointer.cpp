/* Unique Pointers does all the things a normal
 * pointer would do but also does the feature of
 * automatic memory management for use. This means
 * goodbye to memory leaks.
*/

#include <iostream>
#include <memory>
using namespace std;


class Test{
public:
	Test(){
		cout << "Test object created" << endl;
	}
	void echo(){
		cout << "Hello World" << endl;
	}
	~Test(){
		cout << "Test object destroyed" << endl;
	}
};

int main(){
	// create a new single object
	unique_ptr<Test> p1(new Test);
	p1->echo();

	// create an array of objects
	unique_ptr<Test[]> p2(new Test[2]);
	p2[0].echo();
	p2[1].echo();

	// finished
	cout << "Finished" << endl;
	
	return 0;
}
