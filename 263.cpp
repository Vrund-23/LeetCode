bool isUgly(int n) {
        if(n <= 0) return false;
        vector<int> v = {2, 3, 5};
        for(int i : v){
            while(n % i == 0){
                n = n/i;
            }
        }
        return n==1;
    }