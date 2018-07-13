#include <iostream>
#include <string>

using namespace std;

#pragma pack(push, 1)		// disable padding of struct's as 2^x byte boundary
				// instead do a 1 byte boundary padding
typedef struct Person{
	char name[50];		// reason we don't use string name here as string stored
	int age;		// stored to binary file would be a pointer and not the data. pointer after storing data in 
	double weight;		// binary file turns invalid
}Person;

#pragma pack(pop)		// disable padding boundary of 1 byte

int main(){
	cout << sizeof(Person) << endl;

	return 0;
}
