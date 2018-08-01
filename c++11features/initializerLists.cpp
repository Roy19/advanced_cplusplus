#include <iostream>
#include <vector>
#include <initializer_list>
using namespace std;

class test{
public:
    // an initializer list is used to initialize an object with multiple values
    // of same type defined in a list
    test(initializer_list<string> texts){
        // initializer_list is initializing texts with a list of values specified as
        // parameters to the constructor
        for(auto text: texts)
            cout << text << endl;
    }

    void print(initializer_list<string> texts) const{
        for(string t: texts)
            cout << t << endl;
    }
};

int main(){
    test t{"one", "two", "three", "four"};  // initializer_list {} of values 
    cout << endl;
    t.print({"apple", "orange", "banana"}); // initializer_list {} of values to a function

    return 0;
}