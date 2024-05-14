/*Given a string s consisting of words and spaces, return the length of the last word in the string.

A word is a maximal 
substring
 consisting of non-space characters only.

Example 1:

Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.
Example 2:

Input: s = "   fly me   to   the moon  "
Output: 4
Explanation: The last word is "moon" with length 4.
Example 3:

Input: s = "luffy is still joyboy"
Output: 6
Explanation: The last word is "joyboy" with length 6.*/
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = s.size();
        char c;
        string singleWord;

        for(int i = length-1 ; i >= 0 ; i--){
            c = s[i];
            if((c == ' ' && singleWord != "" && singleWord != " ")){
                break;    
            }
            else if (c != ' '){
                singleWord += c;
            }
        }
        length = singleWord.size();
        return(length);
    }
};

int main(){
    string input;
    Solution s1;
    int ans;

    cout << "Enter a Sentence: "<< endl;
    getline(cin,input);

    ans = s1.lengthOfLastWord(input);

    cout << "The length of the last word is: "<< ans;

}