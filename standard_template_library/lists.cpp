#include <iostream>
#include <list>
using namespace std;

int main(){
	list<int> numbers;		// creates a doubly linked list of numbers
	
	numbers.push_back(1);		// insert an element at the back of the list
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_back(4);
	
	for(list<int>::iterator it = numbers.begin();it != numbers.end();it++){
		cout << *it << " ";
	}
	cout << endl;
	
	numbers.push_front(0);	// insert at the front of the list
	numbers.push_front(-1);
	numbers.push_front(-2);
	numbers.push_front(-3);
	numbers.push_front(-4);
	
	for(list<int>::iterator it = numbers.begin();it != numbers.end();it++){
		cout << *it << " ";
	}
	cout << endl;
	
	list<int>::iterator it = numbers.begin();
	it++;
	numbers.insert(it,145);		// insert at the beginning of the iterator
	cout << "Element: " << *it << endl;
	
	for(list<int>::iterator it = numbers.begin();it != numbers.end();it++){
		cout << *it << " ";
	}
	cout << endl;
	
	it = numbers.begin();
	it++;
	it++;
	it = numbers.erase(it);	// erases the value at the it and returns the element after the
	cout << "Element: " << *it << endl;	// value erased
	for(list<int>::iterator it = numbers.begin();it != numbers.end();it++){
		cout << *it << " ";
	}
	cout << endl;
	
	return 0;
}