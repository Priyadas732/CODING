class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minLen = INT_MAX;

        int n = nums.size();
        int i=0, j =0;
        long long sum = nums[0];
        while(j<n){
            if(sum>=target){
                minLen = min(minLen, j-i+1);
                sum -=nums[i];
                i++;
            }
            else if(sum < target){
                j++;
                if(j<n)sum += nums[j];
            }
        }

        if(minLen == INT_MAX)return 0;

        return minLen;
    }
};