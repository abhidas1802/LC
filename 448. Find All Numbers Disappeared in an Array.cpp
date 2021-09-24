class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int i=0;
        vector<int> y;
        unordered_map<int,int> x;
        
        for(i=0;i<nums.size();i++){
            x[nums[i]]++;
            
        }
        for(i=1;i<=nums.size();i++){
            if(x[i]==0){
                y.push_back(i);
            }
        }
        return y;
    }
};
