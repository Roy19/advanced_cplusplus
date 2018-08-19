#include <iostream>
using namespace std;

class Test{
    int num;
public:
    Test():num(0){}
};

Test getTest(){
    return Test();
}

int main(){
    int a = 5;
    Test t = getTest();
    // a is an lvalue
    // 5 is an rvalue

    // In C++ 11 anything that you can take the address of is an lvalue
    // where as that which you can't is an rvalue

    int *pVal1 = &a; // Legal as a is an lvalue
    int *pVal2 = &5;    // Illegal as 7 is an rvalue

    // Returns by functions are also an rvalue
    Test *pTest1 = &getTest();   // Illegal as getTest() returns an rvalue
    Test *pTest2 = &t;          // Legal as t is an lvalue

    // Postfix returns an rvalue
    // Prefix returns an lvalue
    int *pVal3 = &++a;  // Legal
    int *pVal4 = &a++;  // Illegal

    return 0;
}