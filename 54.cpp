vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> res;
        int top = 0, left = 0, right = n-1, bottom = m-1;
        while(top<=bottom && left<=right){
            // Store from Left To Right
            for(int i=left;i<=right;i++)
                res.push_back(matrix[top][i]);
            top++;
            // Store from right to bottom
            for(int i=top;i<=bottom;i++)
                res.push_back(matrix[i][right]);
            right--;

            // Store from right to left
            if(top<=bottom){
                for(int i=right;i>=left;i--)
                    res.push_back(matrix[bottom][i]);
                bottom--;
            }
            // Store from bottom to top
            if(left<=right){
                for(int i=bottom;i>=top;i--)
                    res.push_back(matrix[i][left]);
                left++;
            }
        }
        return res;
    }