class Solution {
public:
    int dp[100001];

    bool solve(int n) {
        // No stones -> current player cannot move -> loses
        if (n == 0)
            return false;

        // Already calculated
        if (dp[n] != -1)
            return dp[n];

        // Try every perfect square
        for (int i = 1; i * i <= n; i++) {

            int remaining = n - i * i;

            // If opponent gets a losing state,
            // current player wins
            if (solve(remaining) == false) {
                return dp[n] = true;
            }
        }

        // Every possible move gives opponent a winning state
        return dp[n] = false;
    }

    bool winnerSquareGame(int n) {
        memset(dp, -1, sizeof(dp));

        return solve(n);
    }
};