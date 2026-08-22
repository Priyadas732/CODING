class Solution {
public:
    bool checkDivisibility(int n) {
        long long sum = 0;
        long long product = 1;
        int original = n;
        while(n>0){
            sum += n%10;
            product *= n%10;
            n = n/10;
        }

        cout<<sum<<" "<<product;
        return original % (sum+product)==0?true: false;
    }
};