#include <iostream>
#include <vector>
using namespace std;

bool match(string text){
    return text.size() == 3;
}
int countStrings(vector<string> &texts, bool (*match)(string test)){    // pass a function pointer to countStrings()
    int count = 0;                                                      // to match a given criteria
    
    for(vector<string>::iterator it = texts.begin(); it != texts.end(); it++){
        if(match(*it))
            ++count;
    }
    return count;
}
int main(){
    vector<string> texts;

    texts.push_back("one");
    texts.push_back("two");
    texts.push_back("three");
    texts.push_back("four");
    texts.push_back("two");
    texts.push_back("five");
    texts.push_back("six");
    texts.push_back("seven");

    cout << countStrings(texts, match) << endl;

    return 0;
}