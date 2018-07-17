#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class test{
    string name;
public:
    test(string n): name(n){
        cout << "Object created" << endl;
    }
    ~test(){
        cout << "Object destroyed" << endl;
    }
    void print(){
        cout << name << endl;
    }
};
int main(){
    // Stack is a LIFO data structure
    stack<test> testStack;

    testStack.push(test("Mike"));
    testStack.push(test("Ali"));
    testStack.push(test("Jake"));
    testStack.push(test("Raj"));

    cout << endl;

    while(testStack.size() > 0){
        test &t = testStack.top();  // item at the top of the stack
        t.print();
        testStack.pop();
    }

    cout << endl;
    // Queue is a FIFO data structure
    queue<test> testQueue;

    testQueue.push(test("Mike"));
    testQueue.push(test("Ali"));
    testQueue.push(test("Jake"));
    testQueue.push(test("Raj"));

    cout << endl;

    while(testQueue.size() > 0){
        test &t = testQueue.front();  // item at the top of the stack
        t.print();
        testQueue.pop();
    }

    return 0;
}