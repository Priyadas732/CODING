class Solution {
public:
    string lexGreaterPermutation(string s, string target) {
        vector<int> freq(26, 0);

        for (char ch : s) {
            freq[ch - 'a']++;
        }

        string res = "";

        function<bool(int)> solve = [&](int pos) {

            if (pos == target.size()) {
                return false; // exactly equal to target
            }

            int curr = target[pos] - 'a';

            // First try to keep the prefix equal
            if (freq[curr] > 0) {
                freq[curr]--;
                res += target[pos];

                if (solve(pos + 1)) {
                    return true;
                }

                // Backtrack
                res.pop_back();
                freq[curr]++;
            }

            // If equal path failed, try a bigger character
            for (int j = curr + 1; j < 26; j++) {

                if (freq[j] > 0) {

                    res += char('a' + j);
                    freq[j]--;

                    // Fill remaining characters in sorted order
                    for (int k = 0; k < 26; k++) {
                        while (freq[k] > 0) {
                            res += char('a' + k);
                            freq[k]--;
                        }
                    }

                    return true;
                }
            }

            return false;
        };

        if (solve(0)) {
            return res;
        }

        return "";
    }
};