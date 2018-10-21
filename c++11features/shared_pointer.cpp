/* Shared Pointers are used to address memory for different 
 * objects that must stay persistent. Once all the object 
 * pointers are out of scope, the memory of the object is 
 * destructed not otherwise.
*/

#include <iostream>
#include <memory>
using namespace std;

class Test{
public:
	Test(){
		cout << "Test object constructed" << endl;
	}
	~Test(){
		cout << "Test object destructed" << endl;
	}
};

int main(){
	shared_ptr<Test> p1(nullptr);
	{
		shared_ptr<Test> p2 = make_shared<Test>();
		p1 = p2;
	}
	cout << "Finished" << endl;

	return 0;
}