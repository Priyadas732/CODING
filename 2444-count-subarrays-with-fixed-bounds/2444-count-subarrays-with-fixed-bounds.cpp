class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {

        int culprit = -1;
        int minIndex = -1;
        int maxIndex = -1;

        long long ans = 0;

        for(int j = 0; j < nums.size(); j++) {

            if(nums[j] < minK || nums[j] > maxK) {
                culprit = j;
            }

            if(nums[j] == minK) {
                minIndex = j;
            }

            if(nums[j] == maxK) {
                maxIndex = j;
            }

            if(minIndex > culprit && maxIndex > culprit) {
                ans += min(minIndex, maxIndex) - culprit;
            }
        }

        return ans;
    }
};