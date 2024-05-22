/*Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

 

Example 1:

Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.
Example 2:

Input: haystack = "leetcode", needle = "leeto"
Output: -1
Explanation: "leeto" did not occur in "leetcode", so we return -1.
*/

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        size_t pos= haystack.find(needle);

        if( pos == std::string::npos){
             return  -1;
        }
        else {
            return pos;
        };
    }
};

int main(){
    Solution s1;
    string hayStack = "My name is Samir Shrestha";
    string needle = "Samir";
    int ans = s1.strStr(hayStack,needle);

    cout << "The first occurance of the strng is at: " << ans;
}