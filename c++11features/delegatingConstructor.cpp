#include <iostream>
using namespace std;

class Parent{
    int num;
    string text;
public:
    // Delegating constructor. This parent class default constructor
    // calls parent class parameterized constructor
    Parent(): Parent("hello") {
        cout << "Parent default constructor called" << endl;
    }
    Parent(string s): text(s), num(5){
        cout << "Parent parameterized constructor called" << endl;
    }
};
class Child: public Parent{
public:
    Child(){
        cout << "Child contructor called" << endl;
    }
};

int main(){
    Child c1;   // Child class must first call the Parent constructor
                // so that the variables it uses from the parent is initialized
                // before the child is ready for use

    return 0;
}