/*Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4

*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans;
        int num;
        int j = 0;
        bool found = false;

        for(int i =0 ; i < nums.size() ; i++){
            if(nums[i] == target){
                ans = i;
                found = true;
            }
        }

        while(found != true ){
            if( (nums[j] < target) && (j < nums.size()-1)) {
                j++;
                found = false;
            }
            else if((nums[j] > target)  && (j < nums.size())){
                ans = j;
                found = true;
            }
            else{
                ans = j+1;
                found = true;
            }
        }
        return ans;
    }
};

int main(){
    vector<int> array = {1,3,4,5,6};
    int target =7;
    int ans ;
    Solution s1;

    ans = s1.searchInsert(array,target);

    cout << ans;

}