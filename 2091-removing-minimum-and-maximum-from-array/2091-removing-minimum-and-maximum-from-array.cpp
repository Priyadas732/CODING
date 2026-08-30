class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return 1;
        int max_idx = -1;
        int maxE = INT_MIN;

        int min_idx = -1;
        int minE = INT_MAX;

        for(int i=0;i<n;i++){
            if(nums[i] > maxE){
                maxE = nums[i];
                max_idx = i;
            }
            if(nums[i] < minE){
                minE = nums[i];
                min_idx = i;
            }
        }

        int minFrontDist = min_idx - 0; 
        int minBackDist = n-min_idx-1;
        int maxFrontDist = max_idx -0;
        int maxBackDist = n-max_idx-1;

        int ans = 0;
        // 1. Delete both from the front
        int bothFront = max(minFrontDist, maxFrontDist) + 1;

        // 2. Delete both from the back
        int bothBack = max(minBackDist, maxBackDist) + 1;

        int frontAndBack = min(minFrontDist, maxFrontDist) + min(minBackDist, maxBackDist) + 2;

        ans = min({bothFront, bothBack, frontAndBack});
        
        return ans;
    }
};