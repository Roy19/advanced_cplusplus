#include <iostream>
#include <exception>
using namespace std;

void gotError(){
    bool error1 = true;
    bool error2 = false;

    if(error1){
        throw bad_alloc();
    }
    if(error2){
        throw exception();
    }
}
int main(){
    try{
        gotError();
    }
    catch(exception &e){            // bad_alloc inherits from exception class
        cout << "Caught exception : " << e.what() << endl;  // so this catch block will run
                                                            // regardless the logic
    }
    catch(bad_alloc &e){
        cout << "Caught bad_alloc : " << e.what() << endl;
    }
    return 0;
}