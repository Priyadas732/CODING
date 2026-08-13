class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size();

        sort(begin(nums), end(nums));

        vector<int>dp(n,1);
        vector<int>prev_idx(n,-1);

        int maxL=1;
        int last_idx=0;

        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]%nums[j]==0){
                    if(dp[i] < dp[j]+1){
                        dp[i] = dp[j]+1;
                        prev_idx[i] = j;
                    }
                    if(maxL < dp[i]){
                        maxL = dp[i];
                        last_idx = i;
                    }
                }
            }
        }

        vector<int>result;

        while(last_idx !=-1){
            result.push_back(nums[last_idx]);
            last_idx = prev_idx[last_idx];
        }
        
        return result;
    }
};