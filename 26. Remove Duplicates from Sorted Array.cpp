class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len=nums.size();
        if(len==0){
            return 0;
        }
        int m=0,n=m+1;
        for(n=0;n<=len-1;n++){
            if(nums[m]!=nums[n]){
                m++;
                nums[m]=nums[n];
            }
            
        }
        return m+1;
    }
};
