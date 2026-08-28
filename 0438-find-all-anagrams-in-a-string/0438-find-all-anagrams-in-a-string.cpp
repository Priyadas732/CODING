class Solution {
public:
    bool allZero(vector<int>cnt){
        for(int i=0;i<26;i++){
            if(cnt[i]!=0)return false;
        }

        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        int k = p.size();
        vector<int>vec(26,0);
        for(auto ch: p){
            vec[ch-'a']++;
        }
        int cnt = 0;
        int i=0,j=0;
        vector<int>result;
        
        while(j<s.size()){
            vec[s[j]-'a']--;

            if(j-i+1 == k){
                if(allZero(vec)){
                    result.push_back(i);
                }
                vec[s[i]-'a']++;
                i++;
            }

            j++;
        }

        return result;
    }
};