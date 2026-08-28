class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        if(t.size() > n) return "";

        unordered_map<char, int>mp;
        // store karliya
        for(auto c: t){
            mp[c]++;
        }

        int requiredCount = t.size();
        int minWindowLen = INT_MAX;
        int start_i = 0;

        int i=0, j=0;

        // story strats
        while(j<n){
            char ch = s[j];

            if(mp[ch] > 0){
                requiredCount--;
            }
            mp[ch]--;

            while(requiredCount == 0){
                // start shriking the window

                if(minWindowLen > j-i+1){
                    minWindowLen = j-i+1;
                    start_i = i;
                }

                mp[s[i]]++;

                if(mp[s[i]] > 0){
                    requiredCount++;
                }
                i++;
            }
            j++;
        }

        return minWindowLen == INT_MAX? "": s.substr(start_i, minWindowLen);
    }
};