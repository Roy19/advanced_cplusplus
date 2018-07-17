#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class test{
    int id;
    string name;
public:
    test(int idx, string n):id(idx), name(n){}
    void print(){
        cout << id << ": " << name << endl;
    }
    friend bool cmp(const test &a,const test &b);   // a friend method can access the private 
                                                    // members of the class but not a member of the class itself
};
bool cmp(const test &a,const test &b){
    return a.name < b.name;                     // < operator is overloaded in the string class
}

int main(){
    vector<test> v;

    v.push_back(test(10, "Mike"));
    v.push_back(test(20, "Alfred"));
    v.push_back(test(30, "Donald"));
    v.push_back(test(40, "George"));
    v.push_back(test(50, "Raj"));

    sort(v.begin(), v.end(), cmp);              // cmp here is pointer to cmp()

    for(vector<test>::iterator it = v.begin(); it != v.end(); it++)
        it->print();

    return 0;
}