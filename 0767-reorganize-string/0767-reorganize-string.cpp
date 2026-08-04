class Solution {
public:
    string reorganizeString(string s) {
        int n = s.size();

        vector<int> freq(26, 0);
        for (char c : s)
            freq[c - 'a']++;

        vector<pair<int, char>> v;

        for (int i = 0; i < 26; i++) {
            if (freq[i] > 0)
                v.push_back({freq[i], char(i + 'a')});
        }

        sort(v.begin(), v.end(), greater<pair<int,char>>());        

        vector<int>res(n);
        int idx=0;
        for (auto &p : v) {
            int cnt = p.first;
            if(cnt>(n+1)/2) return "";
            char ch = p.second;

            while (cnt--) {
                if (idx >= n)
                    idx = 1;

                res[idx] = ch;
                idx += 2;
            }
        }

        return string(res.begin(), res.end());
    }
};