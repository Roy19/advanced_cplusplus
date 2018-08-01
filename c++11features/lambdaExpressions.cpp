#include <iostream>
using namespace std;

void test(void (*fptr)()){
    fptr();
}
int main(){
    // basic defination of a lambda expression
    [](){ cout << "Hello" << endl; };

    // giving them a name
    auto func = []() { cout << "Hello" << endl; };
    func();

    // can even pass them to functions
    test(func);

    // can pass raw lambda expressions directly to functions
    test([]() {cout << "Hello there!" << endl;});

    return 0;
}