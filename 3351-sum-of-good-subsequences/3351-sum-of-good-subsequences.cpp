class Solution {
public:
    int sumOfGoodSubsequences(vector<int>& nums) {
        const long long MOD = 1e9 + 7;

        int maxVal = *max_element(nums.begin(), nums.end());

        vector<long long> cnt(maxVal + 2, 0);
        vector<long long> sum(maxVal + 2, 0);

        long long ans = 0;

        for (int x : nums) {

            long long newCnt = 1;
            long long newSum = x;

            // Previous element can be x - 1
            if (x > 0) {
                newCnt += cnt[x - 1];

                newSum += sum[x - 1];
                newSum += cnt[x - 1] * x;
            }

            // Previous element can be x + 1
            newCnt += cnt[x + 1];

            newSum += sum[x + 1];
            newSum += cnt[x + 1] * x;

            newCnt %= MOD;
            newSum %= MOD;

            cnt[x] = (cnt[x] + newCnt) % MOD;
            sum[x] = (sum[x] + newSum) % MOD;

            ans = (ans + newSum) % MOD;
        }

        return ans;
    }
};