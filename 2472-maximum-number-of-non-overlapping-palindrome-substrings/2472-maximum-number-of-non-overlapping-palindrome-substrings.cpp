class Solution {
public:
    int n;
    int dp[2001][2001];
    bool isPalindrome(string& s,int i, int j){
        while(i<=j){
            if(s[i]==s[j]){
                i++;
                j--;
            }else{
                return false;
            }
        }
        return true;
    }
    int solve(string& s, int k,int i, int j){
        if(i>=n || j>=n)return 0;

        if(dp[i][j] != -1) return dp[i][j];

        int take = 0;
        int grow = 0;
        int slide = 0;

        if(isPalindrome(s,i,j)){
            take = 1 + solve(s,k, j+1, j+k);
            grow = solve(s,k,i,j+1);
            slide = solve(s, k,i+1, j+1);

            return dp[i][j] = max({take, grow, slide}); 
        }

        grow = solve(s, k, i, j+1);
        slide = solve(s,k, i+1, j+1);

        return dp[i][j] = max(grow, slide);
    }
    int maxPalindromes(string s, int k) {
        n = s.size();
        if(k==1)return n;
        
        memset(dp, -1, sizeof(dp));
        int res = solve(s,k,0,k-1);

        return res;
    }
};