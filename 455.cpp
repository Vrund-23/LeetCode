 int findContentChildren(vector<int>& g, vector<int>& s) {
        int m = g.size();
        int n = s.size();
        int i = 0, j = 0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while(i < m && j < n){
            if(s[j] >= g[i]){
                i++;
            }
            j++;
        }
        return i;
    }