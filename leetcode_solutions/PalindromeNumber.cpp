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