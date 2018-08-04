// Lambda Parameters and Return Types in C++ 11
#include <iostream>
using namespace std;

void test_Func(void (*funcptr)(string name)){
    funcptr("Bob");
}
int main(){
    // Lambda expression with a parameter
    auto func = [](string name) { cout << "Hello " << name << endl; };
    func("Aritra");

    // test it by passing a parameter to a function
    test_Func(func);

    // declaring lambda expression with a return type
    auto divide = [](double a, double b) -> double{
        if(b == 0.0){
            return 0;
        }

        return a/b;
    };
    cout << divide(5.6, 9.6) << endl;
    cout << divide(10.0, 0) << endl;

    return 0;
}