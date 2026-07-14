class Solution {
public:
    const int MOD = 1e9+7;
    int dp[201][201][201];
    int solve(vector<int>& nums, int i, int first, int second){
        if(i==nums.size()){
            bool bothNonZero = (first!=0 && second!=0);
            bool bothMatch = first == second;
            
            return (bothNonZero && bothMatch) ? 1: 0;
        }
        
        if(dp[i][first][second] !=-1) return dp[i][first][second];

        int skip = solve(nums, i+1, first, second);
        int seq1 = solve(nums, i+1, __gcd(first, nums[i]), second);
        int seq2 = solve(nums, i+1, first, __gcd(second, nums[i]));

        return dp[i][first][second] = (0LL + skip + seq1 + seq2)%MOD;
    }
    int subsequencePairCount(vector<int>& nums) {
        memset(dp, -1, sizeof(dp));
        return solve(nums, 0, 0 ,0);
    }
};