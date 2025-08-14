void rotate(vector<vector<int>>& matrix) {
        
        int r = matrix.size();
        // Transpose Matrix 
        for(int i=0;i<r;i++){
            for(int j=i+1;j<r;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        // reverse each row
        for(int i=0;i<r;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }