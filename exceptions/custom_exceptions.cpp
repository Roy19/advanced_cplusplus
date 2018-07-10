#include <iostream>
#include <exception>
using namespace std;

class myException: public exception{			// create a personal exception class derived from 
							// the standard exception class
	public:
		virtual const char* what() const throw(){
			return "Something wrong happened";
		}
};

class test{
	public:
		test(){
			throw myException();
		}
};

int main(){
	try{
		test t;
	}
	catch(myException &e){
		cout << "Error message : " << e.what() << endl;
	}
	cout << "Still running" << endl;

	return 0;
}

