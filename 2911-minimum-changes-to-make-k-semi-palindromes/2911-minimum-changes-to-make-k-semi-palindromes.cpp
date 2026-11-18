class Solution {
    static const int MAXN = 205;
    static vector<int> divisors[MAXN];

    static void precompute() {
        static bool done = false;

        if (done) return;
        done = true;
        for (int d = 1; d < MAXN; d++) {
            for (int j = 2 * d; j < MAXN; j += d) {
                divisors[j].push_back(d);
            }
        }
    }

public:
    int minimumChanges(string s, int k) {
        precompute();
        int n = (int)s.size();
        vector<vector<long long>> memo(n, vector<long long>(k + 1, -1));

        auto cost = [&](int start,int end)->long long{
            int len = end-start+1;
            int mini = 1e9;
            for(auto d : divisors[len]){
                int curr_cost = 0; 
                for(int grp =0;grp<d;grp++){
                    int left = start+grp;
                    int right = left + (len/d-1)*d;
                    while(left<right){
                        if(s[left]!=s[right]) curr_cost++;
                        left+=d;
                        right-=d;
                    }
                }
                mini = min(mini, curr_cost);
            }
            return mini;
        };
        
        auto f = [&](auto&& self, int ind, int remainingk)->long long{
            if(remainingk==0){
                if(ind==n) return 0;
                return 1e9;
            }
            if(ind + (remainingk<<1) > n) return 1e9;
            if(memo[ind][remainingk] != -1) return memo[ind][remainingk];
            
            long long result = 1e9;
            for(int end= ind+1;end<n;end++){
                long long remainingcost = self(self, end+1, remainingk-1); 
                if(remainingcost >= 1e9) continue;
                result = min(result, cost(ind,end) + remainingcost);
            }
            return memo[ind][remainingk] = result;
        };
        
        return f(f,0,k);
    }
};

vector<int> Solution::divisors[205];