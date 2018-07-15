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

        cout << "Copy constructor running!" << endl;
    }
    void print(){
        cout << name << ": " << age << endl;
    }
};

int main(){
    map<int, person> people;

    people[0] = person("Bob",40);
    people[1] = person("Mikey",20);
    people[2] = person("Alice",25);

    people.insert(make_pair(55,person("Raj", 30)));
    people.insert(make_pair(54,person("Sue", 35)));

    for(map<int, person>::iterator it = people.begin();it != people.end();it++){
        cout << it->first << ": ";
        it->second.print();
    }
    
    return 0;
}