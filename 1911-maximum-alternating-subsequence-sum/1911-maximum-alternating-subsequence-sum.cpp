class Solution {
public:
    int n;
    long long dp[100001][2];

    long long solve(vector<int>& nums, int ind, bool plus) {
        if (ind == n)
            return 0;

        if (dp[ind][plus] != -1)
            return dp[ind][plus];

        long long take;
        long long notTake;

        if (plus) {
            take = nums[ind] + solve(nums, ind + 1, false);
            notTake = solve(nums, ind + 1, true);
        }
        else {
            take = -nums[ind] + solve(nums, ind + 1, true);
            notTake = solve(nums, ind + 1, false);
        }

        return dp[ind][plus] = max(take, notTake);
    }

    long long maxAlternatingSum(vector<int>& nums) {
        n = nums.size();

        memset(dp, -1, sizeof(dp));

        return solve(nums, 0, true);
    }
};