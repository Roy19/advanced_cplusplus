// Capturing 'this' object using Lambda Expressions
#include <iostream>
using namespace std;

class test{
    int one{1};
    int two{2};
public:
    void run1(){
        int three{3};
        int four{4};

        // Captures all the variables
        auto pLambda = [=]() {
            cout << three << "," << four << "," << one << "," << two << endl;
        };
        pLambda();
    }

    void run2(){
        int three{3};
        int four{4};

        // Captures all the variables by reference including this operator
        auto pLambda = [&,this]() {
            one = 7;
            two = 8;
            cout << three << "," << four << "," << one << "," << two << endl;
        };
        pLambda();
    }

     void run3(){
        int three{3};
        int four{4};

        // Error over here as using 'this' cannot be passed by value
        auto pLambda = [=,this]() {
            cout << three << "," << four << "," << one << "," << two << endl;
        };
        pLambda();
    }
};

int main(){
    test t1;
    t1.run1();
    t1.run2();
    t1.run3();

    return 0;
}