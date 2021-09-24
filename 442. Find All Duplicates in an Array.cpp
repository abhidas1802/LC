class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int i=0;
        vector<int> x;
        for(i=0;i<nums.size();i++){
            int ind=abs(nums[i])-1;
            if(nums[ind]<0){
                x.push_back(ind+1);
            }
            else{
                nums[ind]=-nums[ind];
            }
        }
        return x;
    }
};
