class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        
        if(n==2 && s[0]>s[1])return -1;
        string st = s;
        sort(begin(st), end(st));
        if(s==st)return 0;
        
        char mx = st[n-1];
        char mn = st[0];

        if(s[n-1]==mx || s[0]==mn){
            return 1;
        }

        for(int i=1;i<n-1;i++){
            if(s[i]==mx || s[i]==mn)return 2;
        }
        return 3;
    }
};