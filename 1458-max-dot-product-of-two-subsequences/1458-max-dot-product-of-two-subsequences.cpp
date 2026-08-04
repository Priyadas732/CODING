class Solution {
public:
    long long dp[501][501];
    int m,n;
    long long solve(vector<int>& nums1, vector<int>& nums2, int i,int j){
        if(i==m || j==n){
            return -1e9;
        }

        if(dp[i][j]!=-1e9) return dp[i][j];

        int val = nums1[i]*nums2[j];
        int takeBoth = (nums1[i]*nums2[j]) + solve(nums1, nums2, i+1, j+1);
        int take1 = solve(nums1, nums2, i+1, j);
        int take2 = solve(nums1, nums2, i, j+1);
        return dp[i][j] = max({val, takeBoth, take1, take2}); 
    }
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        m = nums1.size();
        n = nums2.size();
        for(int i=0;i<501;i++){
            for(int j=0;j<501;j++){
                dp[i][j] = -1e9;
            }
        }
        return solve(nums1,nums2,0,0);
    }
};