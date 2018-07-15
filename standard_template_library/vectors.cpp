#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	vector<string> strings;		// advantage of vectors over arrays
								// it's size is mutable
	strings.push_back("one");		
	strings.push_back("two");	// inserts elements at the back and incerments 
	strings.push_back("three");	// vector size
	
	for(int i = 0;i < strings.size();i++){
		cout << strings[i] << endl;
	}
	
	vector<string>::iterator it;	// create a vector iterator
	for(it = strings.begin();it != strings.end();it++/* ++ operator is overloaded*/){
		cout << *it /* * operator is overloaded */<< endl; 
	}
	
	return 0;
}