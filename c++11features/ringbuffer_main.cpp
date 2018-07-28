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

    for(int i = 0;i < buff.capacity(); i++){
        cout << buff.get_from_buffer(i) << endl;
    }

    return 0;
}