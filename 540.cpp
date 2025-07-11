int singleNonDuplicate(vector<int>& nums) {
        // TC -> O(N)
        // SC -> O(N)
        int n = nums.size();
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        for(auto it : mpp){
            if(it.second == 1){
                return it.first;
            }
        }
        return -1;
    }
    int singleNonDuplicate(vector<int>& nums) {
        // TC -> O(N)
        int n = nums.size();
        if(n==1) return nums[0];
        int i;
        for(i=0;i<n-1;i+=2){
           if(nums[i]!=nums[i+1]) return nums[i];
        }
        // if no mismatch found
        return nums[n-1];
    }

     int singleNonDuplicate(vector<int>& nums) {
        // TC -> O(N)
        int n = nums.size();
        if(n==1) return nums[0];
        int i;
        for(i=0;i<n-1;i+=2){
           if((nums[i] ^ nums[i+1]) != 0) return nums[i];
        }
        // if no mismatch found
        return nums[n-1];
    }