
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // TC -> O(N^2) SC -> O(1);
        int rows = matrix.size();
        int cols = matrix[0].size();
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(matrix[i][j]==target) return true;
            }
        }
        return false;
    }
    
		
		bool BS(vector<int> &nums,int target){
        int low = 0;
        int high = nums.size()-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid]==target) return true;
            else if(nums[mid]<target) low = mid + 1;
            else high = mid - 1;
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // TC -> O(m + log n) SC -> O(1);
        int rows = matrix.size();
        int cols = matrix[0].size();
        if(matrix[0][0]>target || matrix[rows-1][cols-1]<target) return false;
        // row-wise search
        for(int i=0;i<rows;i++){
            if(target>=matrix[i][0] && target<=matrix[i][cols-1])
                if(BS(matrix[i],target)) return true;
        }
        return false;
    }