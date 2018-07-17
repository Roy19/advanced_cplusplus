#include <iostream>
#include <map>
using namespace std;

class person{
    string name;
    int age;
public:
    person():name(""),age(0){   // create a default constructor to be used by the map 
    }                           // for initialization purposes (by the map)
    person(string name,int age):name(name),age(age){
    }
    person(const person &other){    // copy constructor 
        name = other.name;          // overloads the default copy constructor
        age = other.age;            // does deep copy (instead of default shallow copy)
    }
    void print() const{             // define this as a function that doesn't change the objects
        cout << name << ": " << age;    // passed to it
    }
    bool operator< (const person& other) const{     // has to be const too as parameters are keys
        return name < other.name;
    }
};

int main(){
    map<person, int> people;

    people[person("Mike",40)] = 40;
    people[person("Mike",40)] = 56;     // same key as pervious, evict the previous value
    people[person("Mike",12)] = 122;    // same key as previous (according to out comparision operator '<')
    people[person("Raj", 30)] = 30;
    people[person("Sue",25)] = 25;
    
    for(map<person, int>::iterator it = people.begin();it != people.end();it++){
        cout << it->second << ": ";
        it->first.print();          // it's necessary that print method does not change the keys
        cout <<  endl;              // as iterator returns constant values
    }
    
    return 0;
}