
class Solution {
public:
    int t[1001][1001];

    string longestPalindrome(string s) {
        int n = s.size();
        int start = 0;
        int maxLen = 0;

        memset(t, -1, sizeof(t));

        for (int L = 1; L <= n; L++) {
            for (int i = 0; i + L - 1 < n; i++) {
                int j = i + L - 1;

                if (i == j) {
                    t[i][j] = true;
                }
                else if (j == i + 1) {
                    t[i][j] = (s[i] == s[j]);
                }
                else {
                    t[i][j] =
                        (s[i] == s[j] && t[i + 1][j - 1]);
                }

                if (t[i][j] && L > maxLen) {
                    maxLen = L;
                    start = i;
                }
            }
        }

        return s.substr(start, maxLen);
    }
};
