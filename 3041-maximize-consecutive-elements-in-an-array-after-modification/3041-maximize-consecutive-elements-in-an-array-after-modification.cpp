class Solution {
public:
    int dp[100005][2];
    int findmethod(vector<int>& nums, int low, int target) {
        int high = nums.size() - 1;
        int ans = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                ans = mid;
                high = mid - 1;
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }

    int solve(int ind, int inc, vector<int>& nums) {
        if (dp[ind][inc] != -1) return dp[ind][inc];
        int currval = nums[ind] + inc;
        int len = 1;
        int next = findmethod(nums, ind + 1, currval + 1);
        if (next != -1) len = max(len, 1 + solve(next, 0, nums));
        next = findmethod(nums, ind + 1, currval);
        if (next != -1) len = max(len, 1 + solve(next, 1, nums));
        return dp[ind][inc] = len;
    }
    int maxSelectedElements(vector<int>& nums) {
        int n = nums.size();
        sort(begin(nums), end(nums));
        memset(dp, -1, sizeof(dp));
        int result = 0;
        for (int i = 0; i < n; i++) {
            result = max({result, solve(i, 0, nums), solve(i, 1, nums)});
        }
        return result;
    }
};