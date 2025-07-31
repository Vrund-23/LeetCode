int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int l=0,r=0;
        unordered_map<char,int> mpp;
        int maxlen = 0;
        while(r<n){
            if(mpp.find(s[r])!=mpp.end()){
                if(mpp[s[r]]>=l){
                    l = mpp[s[r]]+1;
                }
            }
            maxlen = max(maxlen,r-l+1);
            mpp[s[r]]=r;
            r++;
        }
        return maxlen;
    }