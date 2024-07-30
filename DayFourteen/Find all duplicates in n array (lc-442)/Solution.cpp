class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        // -1 Approch
        int n = nums.size();
        vector<int> ans;

        for(int i=0; i<n; i++){
            int num = abs(nums[i]);
            int idx = num-1;
            if(nums[idx] < 0)
                ans.push_back(num);
            nums[idx] *= -1;    
        }
        return ans;


        //Sorting Metod
        // sort(nums.begin(), nums.end());
        // vector<int> ans;
        // int i=0;
        // int j=1;
        // while(j < nums.size()){
        //     if(nums[i] == nums[j]){
        //         ans.push_back(nums[i]);
        //     }
        //     i++;
        //     j++;
        // }
        // return ans;
    }
};