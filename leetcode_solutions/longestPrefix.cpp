/* Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {        
        int len = strs.size();
        
        if (len ==0){
            return "";
        }
        else if (len ==1){
            return strs[0];
        }

        string op = strs[0];
        string temp;

        for (int i = 1; i < len; i++) {
            while (strs[i].find(op) != 0) {
                op.erase(op.size() - 1, 1);
                if (op.empty()) {
                    return "";
                }
            }
        }
        return op;
    }
};

int main(){
    vector<string> str  = {"sam","sam"};
    string answer;
    Solution s1;

    answer = s1.longestCommonPrefix(str);
    cout << answer;
}