//basic structure of stack

#include <iostream>
#include <stack>

using namespace std;

void printStackElement(stack<int>stack) {
    
    cout << "The size of stack is :" << stack.size()<<endl;

    while(!stack.empty()) {
        cout << stack.top() << endl;
        stack.pop();
    }
}

int main() {
    stack<int>numberstack;  // definning stack to hold integer

    numberstack.push(1); //inserts integer to the stack
    numberstack.push(2);
    numberstack.push(3);
    numberstack.push(4);

    if (numberstack.empty()) {  //checks if the stack is empty
        cout << "stack is empty";
    }
    else {
        printStackElement(numberstack);
    }
    return 0;
}
