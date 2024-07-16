class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        while(nums[0] != nums[nums[0]]){
            swap(nums[0], nums[nums[0]]);
        }

        return nums[0];
    }

    // Time Complexcity -> O(n)
    // Space Complexcity -> O(1)
};