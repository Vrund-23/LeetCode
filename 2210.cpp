int countHillValley(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        int l = 0, r = 0;
        for(int i=1;i<n-1;i++){

            if(nums[i-1] == nums[i]) continue;
            l = i-1, r = i + 1;
            while(l >= 0 && nums[l]==nums[i]) l--;
            while(r < n &&nums[r]==nums[i]) r++;
            
            if(l>=0 && r<n && nums[i] > nums[l] && nums[i] > nums[r]) cnt++;
            else if(l>=0 && r<n && nums[i] < nums[l] && nums[i] < nums[r]) cnt++;
            
        }
        return cnt;
    }