class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>cnt;

        for(auto s: strs){
            string t = s;
            sort(t.begin(), t.end());

            cnt[t].push_back(s);
        }

        vector<vector<string>>res;

        for(auto it: cnt){
            res.push_back(it.second);
        }

        return res;
    }
};