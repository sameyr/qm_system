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