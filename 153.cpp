int findMin(vector<int>& nums) {
        int left = 0, right = nums.size()-1;
        int mini = INT_MAX;
        while(left<=right){
            int mid = left + (right - left)/2;
            mini = min(mini,nums[mid]);
            // left part is sorted
            if(nums[left]<=nums[mid]){
                mini = min(nums[left],mini);
                left = mid + 1;
            }
            else{
                mini = min(nums[mid+1],mini);
                right = mid - 1;
            }
        }
        return mini;
    }