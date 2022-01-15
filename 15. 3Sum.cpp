class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        
        int i,j,k;
        int len=nums.size();
        if(len<3){
            return ans;
        }
        for(i=0;i<len-2;i++){
            if(i==0||(i>0&&nums[i]!=nums[i-1])){
                j=i+1;
                k=len-1;
                int sum=0-nums[i];
                while(j<k){
                    
                    if(nums[j]+nums[k]==sum){
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[k]);
                        ans.push_back(temp);
                        while(j<k&&nums[j]==nums[j+1]) j++;
                        while(j<k&&nums[k]==nums[k-1]) k--;
                        j++;
                        k--;
                    }
                    else if(nums[j]+nums[k]<sum){
                        j++;
                    }
                    else{
                        k--;
                    }
                    
                }
            }
        }
        return ans;
    }
};
