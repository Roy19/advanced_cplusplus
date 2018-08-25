#include <iostream>
using namespace std;

class Test{
public:
    Test() = default;
};

Test getTest(){
    return Test();
}

int main(){
    Test t = getTest(); // works as function returns an rvalue
                        // refered by an lvalue
    Test &rTest = getTest();    // doesn't work here as rvalue doesn't have
                            // a reference
    const Test &rTest1 = getTest(); // here the lifetime of the rvalue is extended
                                    // so can be used fruitfully here

    return 0;
}