class Solution {
public:

    string longestPalindrome(string s) {
        int n = s.size();
        
        vector<vector<bool>> t(n, vector<bool>(n));
        int maxLen=0;
        int sp=0;
        
        for(int i=0;i<n;i++){
            t[i][i]=true;
            maxLen= 1;
        }
        for(int L=2;L<=n;L++){
            for(int i=0;i<n-L+1;i++){
                int j = i+L-1;
                if(s[i]==s[j] && L==2){
                    t[i][j] = true;
                    maxLen = 2;
                    sp=i;
                }
                else if(s[i]==s[j] && t[i+1][j-1]==true){
                    t[i][j] = true;
                    if(j-i+1 > maxLen){
                        maxLen = j-i+1;
                        sp=i;
                    }
                }else{
                    t[i][j] = false; // not a plaindrome
                }
            }
        }
        return s.substr(sp,maxLen);
    }
};