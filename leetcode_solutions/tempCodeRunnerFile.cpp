#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int len = strs.size();
        string op = "";
        string final_op = "";
        string first = strs[0];
        int first_length = first.length(); 
        string temp = strs[1];
        int temp_length = temp.length();
        int j=0, k=0;

        while(j < first_length && k < temp_length){
            if (first[j] == temp[k] ){
                op += first[j];
                j++;
                k++;
            }
            else if (k < temp_length){
                k++;
            }
            else if ((k >= temp_length) && (j < first_length)){
                j++;
            }
            else{
                return "";
            }
        }

        /*for(int i =2 ; i < len ; i++){
            temp = strs[i];
            temp_length = temp.length();
            j=0;
            while (j < temp_length){
                if(op[0] == temp[j]){
                    final_op = op[0];
                    j++;
                    op.erase(0,1);
                }
                else{
                    op.erase(0,1);
                }
            }
            op = final_op;
        }*/
        return op;
    }
};

int main(){
    vector<string> str  = {"samir", "srarm", "laudu","khatey"};
    string answer;
    Solution s1;

    answer = s1.longestCommonPrefix(str);
    cout << answer;
}