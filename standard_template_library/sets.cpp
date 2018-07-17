#include <iostream>
#include <set>
using namespace std;

class test{
    int id;
    string name;
public:
    test():id(0),name(""){}
    test(int idx, string n):id(idx), name(n){}

    void print() const{
        cout << id << ": " << name << endl;
    }

    bool operator< (const test& other) const{
        return id < other.id;
    }
};
int main(){
    set<int> ids;   // set stores distinct elements of defined objects

    ids.insert(10);
    ids.insert(20);
    ids.insert(30);
    ids.insert(30);

    for(set<int>::iterator it = ids.begin(); it != ids.end(); it++)
        cout << *it <<  endl;

    set<test> tests;

    tests.insert(test(10,"Mike"));
    tests.insert(test(20,"Jack"));
    tests.insert(test(20, "Bill")); // does not replace the previous entry due to policy implemented by < operator
    tests.insert(test(30,"Raj"));
    tests.insert(test(40,"Rick"));

    for(set<test>::iterator it = tests.begin(); it != tests.end(); it++)
        it->print();

    return 0;
}