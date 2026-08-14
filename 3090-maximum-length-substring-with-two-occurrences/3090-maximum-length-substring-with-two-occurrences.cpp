class Solution {
public:
    int maximumLengthSubstring(string s) {

        int n = s.size();

        vector<int> freq(26, 0);

        int i = 0;
        int j = 0;

        int maxLen = 0;

        while (j < n) {

            if (freq[s[j] - 'a'] < 2) {

                freq[s[j] - 'a']++;

                maxLen = max(maxLen, j - i + 1);

                j++;

            } else {

                while (freq[s[j] - 'a'] >= 2) {

                    freq[s[i] - 'a']--;

                    i++;
                }
            }
        }

        return maxLen;
    }
};