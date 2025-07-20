  vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m = matrix.size();
        int n = matrix[0].size();

        for(int i=0;i<m;i++){
            int mini = matrix[i][0];
            int col = 0;
            for(int j=1;j<n;j++){
                if(matrix[i][j]<mini){
                    mini = matrix[i][j];
                    col = j;
                }
            }
            bool flag = true;
            for(int k=0;k<m;k++){
                if(matrix[k][col]>mini){
                    flag = false;
                    break;
                }
            }
            if(flag) ans.push_back(mini);
        }
        return ans;
    }