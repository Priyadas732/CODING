
class Solution {
public:
    int beautySum(string s) {
        int n = s.size();
        int res = 0;

        for (int i = 0; i < n; i++) {
            int freq[26] = {0};

            for (int j = i; j < n; j++) {
                freq[s[j] - 'a']++;

                int maxf = 0;
                int minf = INT_MAX;

                for (int k = 0; k < 26; k++) {
                    if (freq[k] > 0) {
                        maxf = max(maxf, freq[k]);
                        minf = min(minf, freq[k]);
                    }
                }

                res += maxf - minf;
            }
        }

        return res;
    }
};
