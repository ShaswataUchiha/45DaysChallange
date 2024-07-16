public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //Two Pointer
        int n = nums.size();
        vector<pair<int, int>> numsWithIndices;

        for(int i=0; i<n; i++)
            numsWithIndices.push_back({nums[i], i});

        sort(numsWithIndices.begin(), numsWithIndices.end());

        int left = 0;
        int right = n-1;
        while(left < right){
            int sum = numsWithIndices[left].first + numsWithIndices[right].first;

            if(sum == target)
                return {numsWithIndices[left].second, numsWithIndices[right].second};
            else if(sum > target)
                right--;
            else
                left++;
        }
        return {};

        // Using Map
        // unordered_map<int, int>mp;
        // for(int i=0; i<nums.size(); i++){
        //     int num = nums[i];
        //     int required = target - num;
        //     if(mp.find(required) != mp.end()){
        //         return {i, mp[required]};
        //     }
        //     mp[num] = i;
        // }
        // return {};
    }
};