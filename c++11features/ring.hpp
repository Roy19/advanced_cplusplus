#pragma once

#include <iostream>
using namespace std;

template<class T>
class ring{                     // Template class
public:
    class iterator;
};

template<class T>
class ring<T>::iterator{        // Nested template class
public:
    void print(){
        cout << "Hello from iterator: " << T() << endl;
    }
};