#include "ringbuffer.hpp"
#include <iostream>
using namespace std;

int main(){
    ringbuffer<string> buff(4);

    buff.add_to_buffer("one");
    buff.add_to_buffer("two");
    buff.add_to_buffer("three");
    buff.add_to_buffer("four");
    buff.add_to_buffer("five");
    buff.add_to_buffer("six");
    
    // C++ 98 style iteration
    for(ringbuffer<string>::iterator it = buff.begin(); it != buff.end(); it++){
        cout << *it << endl;
    }
    cout << endl;
    // C++ 11 style iteration
    for(string s: buff){
        cout << s << endl;
    }

    return 0;
}