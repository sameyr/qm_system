/*
Given an integer x, return true if x is a palindrome, and false otherwise.

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 
 */

#include <iostream>

using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
       
        int  remain = x;
        long rtol ;
        int i =0;
        if (x < 0) { return false;}
    
        while (remain != 0){ 
            rtol = rtol * 10 + (remain % 10); 
            remain = remain / 10;   
        }

        if (x == rtol){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    int num = 2442;
    Solution s1;

    cout <<"The give number '"<< num << "' is palindrome: " << s1.isPalindrome(num) << endl;
}