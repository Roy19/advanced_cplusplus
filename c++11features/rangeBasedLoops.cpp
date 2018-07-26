#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    auto texts = {"one", "two", "three"};   // an array of generic character arrays not C++ strings
    for(auto text: texts){
        // saying "for each item (name it text) in the iterable texts"
        cout << text << endl;
    }

    vector<int> numbers;
    numbers.push_back(5);
    numbers.push_back(6);
    numbers.push_back(8);
    numbers.push_back(12);
    numbers.push_back(10);

    for(auto number: numbers){
        cout << number << endl;
    }

    string str = "Hello";
    for(auto c: str){
        cout << c << endl;
    } 

    return 0;
}