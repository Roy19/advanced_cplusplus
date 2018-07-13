#include <iostream>
#include <string>

using namespace std;

typedef struct Person{
	char name[50];		// reason we don't use string name here as string stored
	int age;		// stored to binary file would be a pointer and not the data. pointer after storing data in 
	double weight;		// binary file turns invalid
}Person;

int main(){
	cout << sizeof(Person) << endl;

	return 0;
}
