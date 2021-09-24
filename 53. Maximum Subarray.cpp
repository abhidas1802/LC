class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int max_s=nums[0];
        int i=0;
        for(auto x: nums){
            sum+=x;
            max_s=max(sum,max_s);
            if(sum<0){
                sum=0;
            }
        }
        return max_s;
    }
};
