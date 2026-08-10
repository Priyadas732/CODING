class Solution {
public:
    int n;
    int dp[2501][2501];
    int solve(vector<int>& nums, int prev, int ind){
        if(ind==n)return 0;

        if(dp[prev+1][ind]!=-1) return dp[prev+1][ind];

        int take=0;
        int notTake=0;

        if(prev==-1 || nums[ind] > nums[prev]){
            take = 1 + solve(nums, ind, ind+1);
        }
        notTake = solve(nums, prev, ind+1);
        
        return dp[prev+1][ind] = max(take, notTake);
    }
    int lengthOfLIS(vector<int>& nums) {
        n = nums.size();
        memset(dp, -1, sizeof(dp));
        return solve(nums, -1, 0);
    }
};