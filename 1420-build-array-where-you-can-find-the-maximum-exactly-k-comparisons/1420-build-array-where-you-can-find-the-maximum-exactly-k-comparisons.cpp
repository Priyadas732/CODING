class Solution {
public:
    int N, M, K;
    int dp[51][51][101];
    int MOD = 1e9+7;
    int solve(int ind, int searchCost, int maxE){
        if(ind==N){
            if(searchCost==K)return 1;
            return 0;
        }

        if(dp[ind][searchCost][maxE] !=-1) return dp[ind][searchCost][maxE];
        int maxLen = 0;
        
        for(int i=1;i<=M;i++){
            if(i > maxE){
                maxLen = (maxLen + solve(ind+1, searchCost+1, i))%MOD;
            }else{
                maxLen = (maxLen + solve(ind+1, searchCost, maxE))%MOD;
            }
        }
        return dp[ind][searchCost][maxE] = maxLen%MOD;
    }
    int numOfArrays(int n, int m, int k) {
        if(m < k)return 0;

        N = n;
        M = m;
        K = k;   

        memset(dp, -1, sizeof(dp));    
        int ways = solve(0,0,0);
        return ways; 
    }
};