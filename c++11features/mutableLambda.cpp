#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int c = 5;
    [c]() mutable {
        // changes it's copy of c
        c = 8;
        cout << c << endl;
    }();


    // doesn't change the variable itself
    cout << c << endl;

    return 0;
}
