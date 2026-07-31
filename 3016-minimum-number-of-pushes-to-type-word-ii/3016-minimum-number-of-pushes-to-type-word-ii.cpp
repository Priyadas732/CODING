class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        vector<int>v(26,0);
        for(int i=0;i<n;i++){
            v[word[i]-'a']++;
        }
        sort(v.rbegin(), v.rend());
        int res =0;
        
        for(int i=0;i<26;i++){
            if(v[i]==0)break;
            res += (i/8+1)*v[i];
        }
        return res;
    }
};