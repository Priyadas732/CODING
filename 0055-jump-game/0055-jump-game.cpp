class Solution {
public:
    int n;
    bool go(int idx, vector<int>& nums, vector<int>&dp){
        if(idx==n-1)return true;
        if(nums[idx]==0)return false;

        if(dp[idx] !=-1)return dp[idx];
        for(int i=1;i<=nums[idx];i++){
            if(go(idx+i, nums,dp)) return dp[idx] = true;
        }
        return dp[idx] = false;
    }
    bool canJump(vector<int>& nums) {
        n = nums.size();
        vector<int>dp(n,-1);
        return go(0, nums,dp);
    }
};