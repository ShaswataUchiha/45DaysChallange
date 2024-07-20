class Solution {
public:
    int majorityElement(vector<int>& nums) {

        //Hashing........................
        // map<int, int> mpp;
        // for(int i=0; i<nums.size(); i++){
        //     mpp[nums[i]]++;
        // }
        // for(auto it : mpp){
        //     if(it.second > (nums.size()/2)){
        //         return it.first;
        //     }
        // }
        // return -1;




        //Morre's Voting algo..............
        int count = 0;
        int mazorElem = 0;

        for(int i=0; i<nums.size(); i++){
            if(count == 0)
                mazorElem = nums[i];

            if(mazorElem == nums[i]) count++;
            else count--;  
        }

        return mazorElem;

    }
};