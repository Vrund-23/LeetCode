bool isPerfectSquare(int num) {
        if(num<0) return false;
        int left = 0, right = num;
        while(left<=right){
            int mid = (left+right)/2;
            long long square = 1LL*mid * mid;
            if(square == num) return true;
            else if(square < num) left = mid + 1;
            else right = mid - 1;
        }
        return false;
    }