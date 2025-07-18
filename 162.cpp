 int findPeakElement(vector<int>& nums) {
        // TC->O(N) SC->O(1)
        int n = nums.size();
        if(n==1) return 0;
        for(int i=0;i<n;i++){
            if((i==0 && nums[i]>nums[i+1]) || 
            (i==n-1 && nums[i-1]<nums[i]) ||
            (i > 0 && i < n-1 && nums[i] > nums[i-1] && nums[i] > nums[i+1])){
                return i;
            }
        }
        return -1;
    }
	
	   int findPeakElement(vector<int>& nums) {
        // TC->O(log N) SC->O(1)
        int n = nums.size();
        if(n==1) return 0;
        if(nums[0]>nums[1]) return 0;
        if(nums[n-1]>nums[n-2]) return n-1;
        int low = 1, high = n - 2;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
                return mid;
            }
            // Increasing curve , so peak lies on right side
            else if(nums[mid]>nums[mid-1]){
                low = mid + 1;
            }
            // Decreasing or on bottom peak, so peak lies on left side
            else{
                high = mid - 1;
            }
        }
        return -1;
    }