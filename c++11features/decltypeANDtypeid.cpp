#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
    string value;       // declare a string variable

    decltype(value) name = "Jim";       // declare a new variable of type same as that specified in ()
    cout << typeid(name).name() << endl;   // print out the type name of the variable
    cout << name << endl;

    return 0;
}