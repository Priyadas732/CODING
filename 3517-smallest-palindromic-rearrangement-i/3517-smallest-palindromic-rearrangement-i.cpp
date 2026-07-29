class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        map<char, int> freq;

        for (int i = 0; i < n; i++) {
            freq[s[i]]++;
        }

        string ft = "";
        string mid = "";
        string last = "";

        for (auto &it : freq) {

            if (n % 2 == 0) {
                while (it.second > 0) {
                    ft += it.first;
                    it.second -= 2;
                }
            }
            else {
                if (it.second % 2 != 0) {
                    mid += it.first;
                    it.second--;
                }

                while (it.second > 0) {
                    ft += it.first;
                    it.second -= 2;
                }
            }
        }

        last = ft;
        reverse(last.begin(), last.end());

        return ft + mid + last;
    }
};