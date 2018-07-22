#include <iostream>
using namespace std;

class Parent{
    int one;
public:
    Parent():one(1){
        cout << "Parent default constructor called." << endl;
    }
    Parent(const Parent &other){
        one = other.one;        // the parent class has no idea of the child class's existence
                                // so it 'slices' away the attributes of the child class when copy constructor of the
                                // parent is called from the child object. Hence the term Object Slicing.
        cout << "Parent copy constructor called." << endl;
    }
    virtual void print(){
        cout << "this->one = " << one << endl;
    }
    ~Parent(){
        cout << "Parent destroyed." << endl;
    }
};
class Child: public Parent{
    int two;                // Child class has no access to the parent class's members
public:
    Child():two(2){
        cout << "Child default constructor called." << endl; 
    }
    Child(const Child &other){
        two = other.two;
        cout << "Child copy constructor called." << endl;
    }
    void print(){
        cout << "this->two = " << two << endl;
    }
    ~Child(){
        cout << "Child destroyed." << endl;
    }
};

int main(){
    Child c1;       // the Child class Constructor should automatically call the Parent class constructor
    Parent &p1 = c1;
    p1.print();

    cout << endl;

    Parent p2 = c1;    // parent CTOR is called
    p2.print();
    
    return 0;
}