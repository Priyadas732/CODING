class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        if(n<=8)return n;
        
        int res=0;
        for(int i=0;i<n;i++){
            res += (i/8)+1;
        }
        return res;
    }
};