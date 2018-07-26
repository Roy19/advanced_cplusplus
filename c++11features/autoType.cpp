#include <iostream>
using namespace std;


// Functions can be auto too.
auto func1() -> int{   // specify what can be it's return type
    return 999; 
}
template<class T,class S>
auto func2(T value1, S value2) -> decltype(value1 + value2){
    return value1 + value2;     // ^ decltype can take expressions as arguments 
}

int main(){
    auto value = 7;     // decide from the variable initialization what type it is
    auto text = "Hello";    // and allocate storage accordingly

    cout << value << endl;
    cout << text << endl;
    cout << func1() << endl;
    cout << func2(string("Hello") , string(" World")) << endl;

    return 0;
}