#include <iostream>
#include <fstream>
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
	Person someone = {"Roy", 19, 70};
	Person someoneElse = {};	// empty struct

	string fileName = "text_files/test.bin";
	ofstream outFile;
	ifstream inFile;
	
	// write to file
	outFile.open(fileName, ios::binary);	// by default, interpreted as text file

	if(outFile.is_open()){
		outFile.write(reinterpret_cast<char *>(&someone), sizeof(Person));	// same as (char *)&someone 
											// typecasting
		outFile.close();
	}else{
		cout << "Could not open " + fileName << endl;
	}

	// read from file
	inFile.open(fileName, ios::binary);

	if(inFile.is_open()){
		inFile.read(reinterpret_cast<char *>(&someoneElse), sizeof(Person));	// same as (char *)&someoneElse 
											// typecasting
		cout << someoneElse.name << "," << someoneElse.age << "," << someoneElse.weight << endl;

		inFile.close();
	}else{
		cout << "Could not open " + fileName << endl;
	}

	return 0;
}
