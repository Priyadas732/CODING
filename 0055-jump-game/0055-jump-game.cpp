class Solution {
public:
    bool f(int ind,vector<int>&dp,vector<int>&arr){
        if(ind>=arr.size()-1) return true;
        if(arr[ind]==0) return false;
        if(dp[ind]!=-1) return dp[ind];
        for(int i=1;i<=arr[ind];i++){
            if(f(ind+i,dp,arr)) return dp[ind] = true;
        }
        return dp[ind] = false;
    }
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n,-1);
        return f(0,dp,nums);
    }
};