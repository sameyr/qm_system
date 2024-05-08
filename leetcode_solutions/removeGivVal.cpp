#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
     int i =0 ;
     while(i < nums.size()){
            if(nums[i] == val){
                auto it =nums.begin() + i;
                nums.erase(it);
            }
            else{
                i++;
            }
        }
        return nums.size();
     }
};

int main(){
    Solution s1;

    vector<int> nums = {1, 1, 2, 2, 3, 4, 5, 5, 5, 6};
    int val = 4;

    cout << "Original array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    int newSize = s1.removeElement(nums,val);

    cout << "Array after removing element '" << val <<"' : ";
    for (int i = 0; i < newSize; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}