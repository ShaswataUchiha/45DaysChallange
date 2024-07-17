class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero = 0;
    
        for(int index = 0; index < nums.size(); index++){
            if(nums[index] != 0){
                swap(nums[index], nums[zero]);
                zero++;
            }
        }
    }
};