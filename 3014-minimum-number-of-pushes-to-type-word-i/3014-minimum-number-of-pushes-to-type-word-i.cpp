class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        if(n<=8)return n;
        
        int res=0;
        for(int i = 0; i < n; i++) {
            if(i < 8)
                res += 1;
            else if(i < 16)
                res += 2;
            else if(i < 24)
                res += 3;
            else
                res += 4;
        }
        return res;
    }
};