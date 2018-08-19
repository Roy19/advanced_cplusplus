#include <iostream>
#include <string>
using namespace std;

class test{
    // default initialization of variables done here. C++ 11 style
    int id{3};  
    string name{"Aritra"};
public:
    test() = default;  // default constructor, is set to default 
                        // implementation by the compiler
    
    test(const test &other) = delete;  // delete implementation of default copy constructor

    test &operator= (const test &other) = delete;  // delete the default implementation
                                                    // for = operator
    
    test(int id):id(id){}   // changes only the int field

    void print(){
        cout << id << ": " << name << endl;
    }
};

int main(){
    test t1;
    t1.print();

    test t2(12);
    t2.print();

    /* Can't use here as it's deleted
     * 
    test t3 = t1;
    t3.print();

    t3 = t2;
    t3.print();
    */
    return 0;
}