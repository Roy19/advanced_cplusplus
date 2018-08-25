#include <iostream>
using namespace std;

class Test{
public:
    Test(){
        cout << "constructor" << endl;
    }
    ~Test(){
        cout << "destructor" << endl;
    }
};

Test getTest(){
    cout << "In function getTest()" << endl;
    return Test();
}

template<class T>
void check(T &lRef){
    cout << "lvalue Reference" << endl;
}

template<class T>
void check(T &&rRef){
    cout << "rvalue Reference" << endl;
} 

int main(){
    // here && is not a reference to a reference
    // here it means a reference to an rvalue
    Test &&rRef = getTest();
    int a = 0;

    check(a);
    check(a++);
    cout << "a = " << a << endl;

    return 0;
}