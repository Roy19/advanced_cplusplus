#include <iostream>
using namespace std;

// Abstract classes are those classes that don't actually make any sense of being
// instantiated. Example, there are objects of type Dog, Cat, Mouse etc but none of type
// animal. but they are all kinds of animal.

class animal{
public:
    virtual void run() = 0;     // these functions are called pure virtual functions
    virtual void speak() = 0;   // class(s) which have pure virtual functions are called abstract class(s)
};
class dog:public animal{
public:
    virtual void speak(){
        cout << "Woof!!" << endl;
    }
};
class labrador:public dog{
public:
    virtual void run(){
        cout << "labrador running!" << endl;
    }
};

int main(){
    labrador l;     // cannot declare object of type animal or dog
    l.run();
    l.speak();
    labrador l1;

    // but I can create a pointer or an array of pointers to animal
    animal *a[5];
    a[0] = &l;
    a[0]->run();
    a[0]->speak();

    dog *d[5];
    d[0] = &l1;
    d[0]->run();
    d[0]->speak();

    return 0;
}