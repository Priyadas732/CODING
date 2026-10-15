class Solution {
public:
    
    string longestPalindrome(string s) {
        int n = s.size();
        int start=0;
        int maxLen = 0;
        if(n==1)return s;
        for(int i=0;i<n;i++){
            // odd len palindrome
            int l=i, r=i;
            while(l>=0 && r<n && s[l]==s[r]){
                if(r-l+1 > maxLen){
                    start = l;
                    maxLen = r-l+1;
                }
                l--;
                r++;
            }

            // even len palindrome
            l=i;
            r=i+1;
            while(l>=0 && r<n && s[l]==s[r]){
                if(r-l+1 > maxLen){
                    start = l;
                    maxLen = r-l+1;
                }
                l--;
                r++;
            }
        }

        return s.substr(start, maxLen);
    }
};