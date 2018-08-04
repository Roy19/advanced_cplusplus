// Caprure variables and other types in Lambda Expressions
#include <iostream>
using namespace std;

int main(){
    int one = 1, two = 2, three = 3;

    // capture 'one' in lambda by value
    [one](){ cout << one << endl; }();

    // capture all variables in lambda by value
    [=]() { cout << one << ", " << two << ", " << three << endl; }();

    // capture three by value in lambda
    [&three]() { three = 7;cout << three << endl; }();
    cout << "Three in local function after = " << three << endl;

    // capture all variables in lambda by reference
    [&]() { one = 7; two = 8; three = 9; cout << one << ", " << two << ", " << three << endl; }();
    cout << "One in local function after = " << one << endl;
    cout << "Two in local function after = " << two << endl;
    cout << "Three in local function after = " << three << endl;

    return 0;
}