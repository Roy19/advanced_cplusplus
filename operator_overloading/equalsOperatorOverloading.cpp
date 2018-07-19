#include <iostream>
using namespace std;

class test{
    int id;
    string name;
public:
    test():id(0),name(""){}
    test(int idx,string n):id(idx),name(n){}

    const test &operator = (const test &other){
        cout << "Assignment operator overloaded." << endl;
        id = other.id;
        name = other.name;

        return *this;
    }
    test(const test &other){
        cout << "Copy constructor is overloaded." << endl;
        *this = other; 
    }
    void print(){
        cout << id << ": " << name << endl;
    }
};
int main(){
    test test1(20,"Roy");
    test1.print();

    test test2;         // test2 first get initialized using default constructor
    test2 = test1;      // gets assigned the value of test1 using overloaded = operator
    test2.print();      

    test test3 = test1; // here test3 is initialized to that of test1 by a copy constructor
    test3.print();

    return 0;
}