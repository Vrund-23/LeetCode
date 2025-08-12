void sortColors(vector<int>& nums) {
       // sort(nums.begin(),nums.end());
       int z=0,o=0,t=0;
       for(int i=0;i<nums.size();i++){
            if(nums[i]==0) z++;
            else if(nums[i]==1) o++;
            else t++;
       }
       int i,j;
       for(i=0;i<z;i++){
            nums[i]=0;
       }
       for(j=0;j<o;j++){
            nums[i]=1;
            i++;
       }
       for(int k=0;k<t;k++){
            nums[i]=2;
            i++;
       }
    }