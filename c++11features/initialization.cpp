// Initialization in C++ 11

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int value{5};       // is like value = 5
    cout << value << endl;

    int *pInts{nullptr};    // nullptr is C++11 added type (different from NULL), used for pointer initialization
    cout << pInts << endl;

    int *PInts{&value}; // is like PInts = &value
    cout << PInts << endl;

    vector<string> s{"one", "two", "three"};
    for(auto str: s){
        cout << str << " ";
    }
    cout << endl;

    struct S{
    public:
        int value;
        string text;
    }s1{5, "roy"}, s2{6,"roy2"};

    cout << s1.text << endl;
    cout << s2.text << endl;

    return 0;
}