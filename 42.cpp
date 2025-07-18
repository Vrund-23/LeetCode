int trap(vector<int>& height) {
        // TC -> O(N^2) TC-> O(1)
        int n = height.size();
        int waterTrapped = 0;
        for(int i=0;i<n;i++){
            int j = i;
            int leftmax = 0, rightmax =0;
            // to find leftmax
            while(j>=0){
                leftmax = max(leftmax,height[j]);
                j--;
            }
            j = i;
            // to find rightmax
            while(j<n){
                rightmax = max(rightmax,height[j]);
                j++;
            }
            // count waterTrapped
            waterTrapped += min(leftmax,rightmax) - height[i];
        }
        return waterTrapped;
    }
												
		int trap(vector<int>& height) {
        // TC -> O(3N) TC-> O(2N)
        int n = height.size();
        int waterTrapped = 0;
        vector<int> prefix(n),suffix(n);
        prefix[0] = height[0];
        // to get leftmax of each element
        for(int i=1;i<n;i++){
            prefix[i] = max(prefix[i-1],height[i]);
        }
        // to get rigthmax of each element
        suffix[n-1] = height[n-1];
        for(int i=n-2;i>=0;i--){
            suffix[i] = max(suffix[i+1],height[i]);
        }
        // to get total waterTrapped
        for(int i=0;i<n;i++){
            waterTrapped += min(prefix[i],suffix[i]) - height[i];
        }
        return waterTrapped;
    }
															    int trap(vector<int>& height) {
        // TC -> O(N) TC-> O(1)
        int n = height.size();
        int waterTrapped = 0;
        int left = 0, right = n-1;
        int leftmax = 0, rightmax = 0;
        while(left<=right){
            if(height[left]<=height[right]){
                if(height[left]>=leftmax){
                    leftmax = height[left];
                }
                else{
                    waterTrapped += leftmax - height[left];
                }
                left++;
            }
          
            else{
                if(height[right]>=rightmax){
                    rightmax = height[right];   
                }
                else{
                    waterTrapped += rightmax - height[right];
                }
                right--;
            }
        }
        return waterTrapped;
    }