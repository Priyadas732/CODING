class Solution {
public:
    int dp[101];
    int solve(vector<int>& nums, int i,int end){
        
        if(i>=end) return 0;
        if(dp[i] != -1) return dp[i];

        int take = nums[i] + solve(nums, i+2,end);
        int nottake = solve(nums, i+1,end);

        return dp[i] = max(take, nottake);
    }
    int rob(vector<int>& nums) {
        int n= nums.size();

        if(n==1)return nums[0];
        if(n==2) return max(nums[0], nums[1]);

        memset(dp,-1,sizeof(dp));
        int ans1 = solve(nums,0,n-1);

        memset(dp,-1,sizeof(dp));
        int ans2 = solve(nums,1,n);

        return max(ans1,ans2);
    }
};