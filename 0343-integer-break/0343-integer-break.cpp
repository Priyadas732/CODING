class Solution {
public:
    int dp[60];
    int solve(int num){
        if(num==1)return 1;
        int res=INT_MIN;
        if(dp[num]!=-1)return dp[num];
        for(int i=1;i<num;i++){
            int prod  = i*max(num-i, solve(num-i));
            res = max(res, prod);
        }
        return dp[num] = res;
    }
    int integerBreak(int n) {
        memset(dp,-1,sizeof(dp));
        solve(n);
        sort(rbegin(dp), rend(dp));
        return dp[0];
    }
};