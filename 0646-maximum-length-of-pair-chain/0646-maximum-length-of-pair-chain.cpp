class Solution {
public:
    int n;
    int t[1001][1001];

    int solve(vector<vector<int>>& pairs, int prevInd, int ind) {
        if(ind == n)
            return 0;

        if(prevInd != -1 && t[prevInd][ind] != -1)
            return t[prevInd][ind];

        int notTake = solve(pairs, prevInd, ind + 1);

        int take = 0;

        if(prevInd == -1 || pairs[ind][0] > pairs[prevInd][1]) {
            take = 1 + solve(pairs, ind, ind + 1);
        }

        int ans = max(take, notTake);

        if(prevInd != -1)
            t[prevInd][ind] = ans;

        return ans;
    }

    int findLongestChain(vector<vector<int>>& pairs) {
        n = pairs.size();

        memset(t, -1, sizeof(t));

        sort(pairs.begin(), pairs.end());

        return solve(pairs, -1, 0);
    }
};