// Create a nested template class example

#include "ringbuffer.hpp"

int main(){
    ringbuffer<string>::iterator it1;
    ringbuffer<int>::iterator it2;

    it1.print();
    it2.print();

    return 0;
}