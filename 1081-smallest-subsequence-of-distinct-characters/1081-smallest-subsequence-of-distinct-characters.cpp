class Solution {
public:
    string smallestSubsequence(string s) {
        vector<bool>vis(26,false);
        vector<int>lastIdx(26,-1);

        string res = "";
        res += s[0];
        vis[s[0]-'a'] = true;
        for(int i=0;i<s.size();i++){
            lastIdx[s[i]-'a'] = i;
        }
        for(int i=0;i<s.size();i++){
            int curr = s[i]-'a';

            if(vis[curr])continue;

            while (!res.empty() && res.back() > s[i] && lastIdx[res.back() - 'a'] > i) {
                vis[res.back() - 'a'] = false; 
                res.pop_back();
            }

            res += s[i];
            vis[curr] = true;
            
        }

        return res;
    }
};