class Solution {
public:
    inline static const int MOD = 1e9+7;
    
    inline static int modadd(int a, int b) {
        return (a + b) % MOD;
    }
    
    inline static int modmul(int a, int b) {
        return (1LL * a * b) % MOD;
    }
    
    inline static int modsub(int a, int b) {
        return (a - b + MOD) % MOD;
    }
    
    // Fix 2: Added a modular exponentiation function to safely calculate (base^exp) % MOD
    inline static int binpow(int base, int exp) {
        int res = 1;
        base %= MOD;
        while (exp > 0) {
            if (exp % 2 == 1) res = modmul(res, base);
            base = modmul(base, base);
            exp /= 2;
        }
        return res;
    }

    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        int n = s.size();
        vector<int> numPrefix(n + 1, 0);
        vector<int> lenPrefix(n + 1, 0);
        vector<int> sumPrefix(n + 1, 0);
        
        // Your exact logic for building the prefixes remains unchanged
        for(int i = 0; i < n; i++){
            if(s[i] == '0'){
                numPrefix[i+1] = numPrefix[i];
                lenPrefix[i+1] = lenPrefix[i];
                sumPrefix[i+1] = sumPrefix[i];
            } else {
                numPrefix[i+1] = modadd(modmul(numPrefix[i], 10), (s[i] - '0'));
                lenPrefix[i+1] = lenPrefix[i] + 1;
                sumPrefix[i+1] = modadd(sumPrefix[i], (s[i] - '0'));
            }    
        }
        
        vector<int> res;
        for(auto it : queries){
            int l = it[0];
            int r = it[1];
            
            // Fix 3: Exponent is the difference in lengths to shift the prefix properly
            int exp = lenPrefix[r+1] - lenPrefix[l];
            int powerOf10 = binpow(10, exp);
            
            // Calculate x using the safe power of 10
            int x = modsub(numPrefix[r+1], modmul(numPrefix[l], powerOf10));
            
            // Fix 1: Corrected sum calculation to strictly use sumPrefix
            int sum = modsub(sumPrefix[r+1], sumPrefix[l]);
            
            int t = modmul(x, sum);
            res.push_back(t);
        }
        return res;
    }
};