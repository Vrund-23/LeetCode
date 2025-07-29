vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end()); // O(NlogN)
        for(int i=0;i<nums.size();i++){ // O(N)
            if(i>0 && nums[i]==nums[i-1])  continue; // if it same as previous, not need to check again
            int left = i+1,right=nums.size()-1;
            while(left<right){ // O(N)
                if(nums[i]+nums[left]+nums[right]==0){
                    res.push_back({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                    // Ensure that duplicate are not include
                    while(left<right && nums[left]==nums[left-1]) left++; 
                    while(left<right && nums[right]==nums[right+1]) right--;
                }
                else if(nums[i]+nums[left]+nums[right]<0) left++;
                else right--;
            }
        }
        return res;
    }