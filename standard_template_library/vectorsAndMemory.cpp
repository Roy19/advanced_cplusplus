#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> numbers;	// create a vector of integers
	int capacity = numbers.capacity();

	cout << "Size: " << numbers.size() << endl;
	cout << "Capacity: " << numbers.capacity() << endl;
	
	for(int i = 0; i < 10000; i++){
		if(numbers.capacity() != capacity){
			capacity = numbers.capacity();
			cout << "Capacity: " << capacity << endl;
		}
		
		numbers.push_back(i);
	}
	
	numbers.clear();	// clear the vector (changes only the size not capacity)
	cout << "Size: " << numbers.size() << endl;
	cout << "Capacity: " << numbers.capacity() << endl;
	
	numbers.resize(100); // change the size of the vector (converts all the elements (from 0 to size) to 0)
	cout << "Size: " << numbers.size() << endl;	// rest remains unchanged
	cout << "Capacity: " << numbers.capacity() << endl;

	numbers.reserve(100000); // changes the capacity`
	cout << "Size: " << numbers.size() << endl;
	cout << "Capacity: " << numbers.capacity() << endl;
	
	return 0;
}