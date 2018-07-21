#include <iostream>
using namespace std;

template<class T>
class test{
    T obj;
public:
    test(T obj){
        this->obj = obj;
    }
    void print() const{
        cout << obj << endl;
    }
};

int main(){
    test<string> t1("Hello");
    t1.print();

    return 0;
}