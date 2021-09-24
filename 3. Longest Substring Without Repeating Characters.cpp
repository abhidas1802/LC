class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> cm;
        int l=0;
        int r=0;
        int count=0;
        while(r<s.length()){
            if(cm.find(s[r])!=cm.end()){
                l=max(cm[s[r]]+1,l);
            }
            cm[s[r]]=r;
            count=max(count,r-l+1);
            r++;
        }
        return count;
    }
};
