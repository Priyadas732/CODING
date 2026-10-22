class Solution {
public:
    int t[301];
    bool find(int idx, string &s, unordered_set<string>&st){
        if(idx==s.size())return true;

        if(t[idx] !=-1)return t[idx];
        string temp = "";
        for(int i=idx;i<s.size();i++){
            temp += s[i];
            if(st.find(temp) != st.end()){
                if(find(i+1, s, st)){
                    return t[idx] = true;
                }
            }

        }
        return t[idx] = false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string>st(wordDict.begin(), wordDict.end());

        memset(t,-1, sizeof(t));
        return find(0, s, st);
    }
};