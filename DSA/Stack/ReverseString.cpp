#include <iostream>
#include <stack>

using namespace std;

void reverseString(stack<char>charStack){

    string result = "";
    while(!charStack.empty()){
        result = result + charStack.top();
        charStack.pop();
    }

    cout << "The reverse of your String is :" << result << endl;
}


int main(){
    
    stack<char>stringStack;
    string s = "samir shrestha";

    //cout << "Enter your String: " << endl;
    //cin >> s;

    for (int i = 0 ; i < s.size(); i++){
        stringStack.push(s[i]);
    }

    reverseString(stringStack);
    return 0;
}