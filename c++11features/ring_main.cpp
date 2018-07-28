// Create a nested template class example

#include "ring.hpp"

int main(){
    ring<string>::iterator it1;
    ring<int>::iterator it2;

    it1.print();
    it2.print();

    return 0;
}