class Solution {
public:
    int n;
    int dp[1001][1001];

    bool predecessor(string &s1, string &s2) {

        if(s2.size() != s1.size() + 1)
            return false;

        int i = 0, j = 0;
        int diff = 0;

        while(i < s1.size() && j < s2.size()) {

            if(s1[i] == s2[j]) {
                i++;
                j++;
            }
            else {
                diff++;
                j++;
            }

            if(diff > 1)
                return false;
        }

        return true;
    }

    int solve(vector<string>& words, int prev, int curr) {

        if(curr == n)
            return 0;

        if(dp[prev + 1][curr] != -1)
            return dp[prev + 1][curr];

        // Don't take current word
        int notTake = solve(words, prev, curr + 1);

        // Take current word
        int take = 0;

        if(prev == -1 ||
           (words[curr].size() == words[prev].size() + 1 &&
            predecessor(words[prev], words[curr]))) {

            take = 1 + solve(words, curr, curr + 1);
        }

        return dp[prev + 1][curr] = max(take, notTake);
    }

    int longestStrChain(vector<string>& words) {

        n = words.size();

        sort(words.begin(), words.end(),
             [](string &a, string &b) {
                 return a.size() < b.size();
             });

        memset(dp, -1, sizeof(dp));

        return solve(words, -1, 0);
    }
};