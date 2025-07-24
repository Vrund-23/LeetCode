 bool isHappy(int n) {
        
        unordered_set<int> st;

        while (n != 1 && !st.count(n)) {
            st.insert(n);
            int nextNum = 0;
            while (n > 0) {
                int digit = n % 10;
                nextNum += digit * digit;
                n /= 10;
            }
            n = nextNum;
        }

        return n == 1;

    }