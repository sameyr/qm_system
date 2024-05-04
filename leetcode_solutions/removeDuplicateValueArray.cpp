#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> sorted;
        sorted.push_back(nums[0]);

        for (int i =0 ; i< nums.size() ;i ++){
            if (nums[i] != sorted.back()){
                sorted.push_back(nums[i]);         
            }
        }
        nums=sorted;
        return sorted.size();
    }
};

int main(){
    Solution s1;

    vector<int> nums = {1, 1, 2, 2, 3, 4, 5, 5, 5, 6};

    cout << "Original array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    int newSize = s1.removeDuplicates(nums);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}