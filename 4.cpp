 double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double median=0;
        vector<int> total;
        int i;
        for(i=0;i<nums1.size();i++){
            total.push_back(nums1[i]);
        }
        for(int j=0;j<nums2.size();j++){
            total.push_back(nums2[j]);
        }
        sort(total.begin(),total.end());
        int n=nums1.size()+nums2.size();
        int mid=n/2;
        if(n%2!=0){
            median=total[mid];
        }
        else{
            median=total[mid]+total[mid-1];
            median=median/2.0;
        }
        return median;
    }