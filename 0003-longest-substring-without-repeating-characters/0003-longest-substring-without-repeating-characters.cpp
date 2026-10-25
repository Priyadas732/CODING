class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        
        int maxL = 0; 
        int left = 0;
        for(int right=0;right<s.size();right++){

            char c = s[right];

            if(mp.count(c) && mp[c] >= left){
                left = mp[c]+1;
            }

            mp[c] = right;
            
            maxL = max(maxL, right-left+1);
            
        }
        return maxL;
    }
};