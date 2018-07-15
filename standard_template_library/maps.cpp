#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
	map<string, int> ages;	// create a key,value pair table
							// key: string, value: int
	ages["Mike"] = 40;
	ages["Raj"] = 50;
	ages["John"] = 60;
	
	// print all elements in the map
	for(map<string, int>::iterator it = ages.begin();it != ages.end();it++){
		cout << it->first << ": " << it->second << endl;
	}
	
	// trying to check ages["Sue"] will result in creating a new key value pair
	// Sue: 0
	//instead use this method
	
	if(ages.find("Sue") != ages.end()){
		cout << "Found Sue. Sue: " << ages["Sue"] << endl;
	}else{
		cout << "Could not find Sue." <<endl;
	}
	
	return 0;
}