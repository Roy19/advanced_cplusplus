#include <iostream>
using namespace std;

struct Mytest{          // overloaded () operator
    virtual bool operator()(string text){
        return text == "lion";
    } 
};
int main(){
    Mytest t;               // basically they are like objects to functions
                            // called using overloaded () operator
                            // used as a parameter to other functions where function 
                            // pointers cannot be used 
    cout << t("liond") << endl;
}