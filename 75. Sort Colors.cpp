class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i,temp;
        int l=0,m=0,u=nums.size()-1;
        for(i=0;i<nums.size();i++){
            if(nums[m]==0){
                temp=nums[l];
                nums[l]=nums[m];
                nums[m]=temp;
                m++;
                l++;
            }
            else if(nums[m]==1){
                m++;
            }
            else if(nums[m]==2){
                temp=nums[m];
                nums[m]=nums[u];
                nums[u]=temp;
                u--;
            }
        }
        
        
    }
};
