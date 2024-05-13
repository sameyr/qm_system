/*
Q.20. Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false
*/

#include <iostream>
#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> brackets;

        for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            brackets.push(c); // Push opening brackets onto the stack
        } else {
            if (brackets.empty()) {
                return false; // No matching opening bracket found
            }
            char top = brackets.top();
            brackets.pop();
            if ((c == ')' && top != '(') || (c == '}' && top != '{') || (c == ']' && top != '[')) {
                return false; // Mismatched closing bracket
            }
        }
    }
    return brackets.empty(); // Check if all opening brackets have been matched
    }
    
};

int main(){
    Solution s1;
    string input;
    bool output;

    cout <<"ENter a string of brackets: " ;
    cin >> input;

    output = s1.isValid(input);
    if (output == 1){    
        cout << "The Parantheses string is valid." << endl;
    }
    else{
        cout << "The Parantheses string is invalid." << endl;
    }
    return 0;
}