class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        vector<int>v(26,0);
        for(int i=0;i<n;i++){
            v[word[i]-'a']++;
        }
        sort(v.begin(), v.end());
        int res =0;
        int no_ele=0;
        for(int i=25;i>=0;i--){
            if(no_ele<8 && v[i]>0){
                res += v[i];
                no_ele++;
            }else if(no_ele<16 && v[i]>0){
                res += 2*v[i];
                no_ele++;
            }else if(no_ele<24 && v[i]>0){
                res += 3*v[i];
                no_ele++;
            }else{
                if(v[i]>0){
                    res += 4*v[i];
                    no_ele++;
                }
            }
        }
        return res;
    }
};