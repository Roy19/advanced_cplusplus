#include <iostream>
using namespace std;

template<typename T>    // can also be template<class T>
T greaterThan(T a, T b){
    return (a > b)?a:b;
}

int main(){
    // types of usage of template function
    int x = greaterThan(5, 6);
    float y = greaterThan(5.398, 1.235);
    string z = greaterThan<string> ("Hello", "hello");
    
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    return 0;
}
