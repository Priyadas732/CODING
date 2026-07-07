class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x=0;
        long long sum = 0;
        while(n>0){
            int t = n%10;
            n=n/10;
            if(t==0)continue;
            sum += t;
            x = x*10+t;
             
        }
        string s = to_string(x);
        reverse(s.begin(), s.end());
        x = stoi(s);
        return x*sum;
    }
};