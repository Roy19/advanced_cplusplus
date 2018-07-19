#include <iostream>
#include <fstream>
using namespace std;

class test{
    int id;
    string name;
public:
    test():id(0),name(""){}
    test(int idx,string n):id(idx),name(n){}

    const test &operator = (const test &other){
        id = other.id;
        name = other.name;

        return *this;
    }
    test(const test &other){
        *this = other; 
    }
    void print(){
        cout << id << ": " << name << endl;
    }

    friend ostream &operator<< (ostream &out, const test &other){
        out << other.id << ": " << other.name;
        return out;
    }
};
int main(){
    test test1(10, "Mike");
    
    // cout is actually an object of class ofstream
    // it follows left to right evaluation, i.e, (cout << test1) << endl;
    cout << test1 << endl;
}