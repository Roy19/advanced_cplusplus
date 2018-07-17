#include <iostream>
#include <map>
using namespace std;

int main(){
    multimap<int, string> lookup;   // unlike maps where the old value gets replaced with new value
                                    // multimaps store different values for same key
    lookup.insert(make_pair(10, "Mike"));
    lookup.insert(make_pair(10, "Raj"));
    lookup.insert(make_pair(10, "Ricky"));
    lookup.insert(make_pair(20, "Jay"));

    for(multimap<int,string>::iterator it = lookup.begin(); it != lookup.end(); it++){
        cout << it->first << ": " << it->second << endl;
    }
    cout << endl;

    for(multimap<int, string>::iterator it = lookup.find(10); it != lookup.end(); it++){
        cout << it->first << ": " << it->second << endl;
    }
    cout << endl;

    auto its = lookup.equal_range(10);      // automatically detects type of the variable declared (C++ 11)
    // alternative to
    //pair<multimap<int, string>::iterator, multimap<int, string>::iterator> its = lookup.equal_range(10);

    for(multimap<int, string>::iterator it = its.first; it != its.second; it++){
        cout << it->first << ": " << it->second << endl;
    }

    return 0;
}