#include <iostream>
using namespace std;

void test(int value){
    cout << "Hello: " << value << endl;
}

int main(){
    test(7);        // function name is actually a pointer to itself

    void (*pTest)(int); // declaration of a function pointer to test()
    pTest = test;       // can also be pTest = &test;

    pTest(8);           // using the function
    
    return 0;
}