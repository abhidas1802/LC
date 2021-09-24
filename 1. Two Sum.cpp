class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        int i=0;
        vector<int> ans;
        for(i=0;i<nums.size();i++){
            if(m.find(target-nums[i])!=m.end()){
                ans.push_back(m[target-nums[i]]);
                ans.push_back(i);
                
                return ans;
            }
            m[nums[i]]=i;
        }
        return ans;
    }
};
