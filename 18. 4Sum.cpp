class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int i,j;
        vector<vector<int>> ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                int target_2=target-(nums[i]+nums[j]);
                int left=j+1;
                int right=n-1;
                while(left<right){
                    if((nums[left]+nums[right])>target_2) right--;
                    else if((nums[left]+nums[right])<target_2) left++;
                    else{
                        vector<int> quad(4,0);
                        quad[0]=nums[i];
                        quad[1]=nums[j];
                        quad[2]=nums[left];
                        quad[3]=nums[right];
                        ans.push_back(quad);
                        while(left<right && nums[left]==quad[2]) left++;
                        while(left<right && nums[right]==quad[3]) right--;
                    }
                    
                }
                while(j+1<n && nums[j+1]==nums[j]) j++;
                
            }
            while(i+1<n && nums[i+1]==nums[i]) i++;
        }
        return ans;
    }
};
