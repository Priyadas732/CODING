class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if(n==1)return 1;
        unordered_set<char>w;
        
        int maxi=0;
        int i=0;int j=0;
        while(j<s.size()){
            if(!w.count(s[j])){
                w.insert(s[j]);
                maxi = max(maxi, j-i+1);
                j++;
            }else{
                w.erase(s[i]);
                i++;
            }
            
        }
        return maxi;
    }
};