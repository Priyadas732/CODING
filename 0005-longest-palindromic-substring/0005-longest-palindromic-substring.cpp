class Solution {
public:
    int n;
    int dp[1001][1001];
    bool isPalindrome(string &s,int i,int j){
        
        if(i>=j) return true;

        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]==s[j]){
            return isPalindrome(s,i+1,j-1);
        }
        return dp[i][j] = 0;
    }
    
    string longestPalindrome(string s) {
        n = s.size();
        
        int maxLen=0;
        int sp=0;
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(isPalindrome(s,i,j)==true){
                    if(j-i+1 > maxLen){
                        maxLen = j-i+1;
                        sp = i;
                    }
                }
            }
        }
        return s.substr(sp,maxLen);
    }
};