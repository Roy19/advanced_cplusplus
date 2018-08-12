// C++ Standard Function Type

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

bool check(string &s){
    return s.size() == 3;
}
class Check{
public:
    bool operator()(string &test){
        return test.size() == 3;
    }
}check1;
void run(function<bool(string&)> func){
    string t = "stars";
    cout << func(t) << endl;
}

int main(){
    auto lambda = [](string &test){ return test.size() == 3; };
    vector<string> vec{"one", "two", "three"};

    // pass a lambda expression
    int count = count_if(vec.begin(), vec.end(), lambda);
    cout << count << endl;

    // pass a function pointer
    count  << count_if(vec.begin(), vec.end(), check);
    cout << count << endl;

    // pass a functor
    count = count_if(vec.begin(), vec.end(), check1);
    cout << count << endl;

    // create a functional type and assign it a lambda expression
    // basically functional types can refer to any satndard function in C++
    function<bool(string &)> test = [](string &s){ return s.size()  == 3;};
    count = count_if(vec.begin(), vec.end(), test);
    cout << count << endl;

    // pass a function or a lambda expression to test()
    run(lambda);
    run(check);
    run(check1);

    return 0;
}