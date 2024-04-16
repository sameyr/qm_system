#include <iostream>
#include <unordered_map>

class Solution {
public:
    int romanToInt(string s) {
        std::unordered_map<char,int> romanToIntMap={
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        } ;

        int result=0;
        int previous=0;
        int current=0;

        if ((s.length() < 1 ) && (s.length() > 15)){
            cout << "Wrong";
        }

        for (int i = s.length()-1 ; i >= 0; i--){

            current = romanToIntMap[s[i]];

            if (current < previous){
                result = result - current;
            }
            else{
                result = result + current;
            }

            previous = current;
        }

        return result;
    }
};