#include <iostream>
using namespace std;

void mightGoWrong(){
	bool error1 = false;	// Let's assume a error occurs when doing
	bool error2 = true;	// some job

	if(error1){
		throw 8;	// throw out the error
				// here I considered 8 (randomly)
	}
	if(error2){
		throw string("Something went wrong.");	// throw out another error
	}						// one thing to note about it is that
							// for exceptions, returning reference to this object is valid
							// C++ compiler instantiates it and also cleans it up.
}
int main(){
	try{		// trying to catch the error
		mightGoWrong();
	}
	catch(int e){	// if error, do stuff accordingly
		cout << "Error code : " << e << endl;
	}
	catch(string &e){ // multiple catch blocks
		cout << "Error message : " << e << endl;
	}
	
	cout << "Still running" << endl;	// the execution of main can now
						// continue as usual

	return 0;
}
