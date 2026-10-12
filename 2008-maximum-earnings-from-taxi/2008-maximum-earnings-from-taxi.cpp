class Solution {
public:
    long long maxTaxiEarnings(int n, vector<vector<int>>& rides) {
        sort(rides.begin(), rides.end());
        vector<int>endindex(rides.size()); 
        for(int i=0;i<rides.size();i++) endindex[i] = rides[i][0]; 
        vector<long long> dp(rides.size(), -1);

        auto f = [&](auto&& self,int curr)->long long{
            if(curr>=rides.size()) return 0; 
            
            if(dp[curr] != -1) return dp[curr];

            long long nottake = self(self,curr+1);
            int nextind = lower_bound(endindex.begin(),endindex.end(),rides[curr][1])-endindex.begin();
            long long take = (long long)(rides[curr][1]-rides[curr][0]+rides[curr][2])+self(self,nextind);
            
            return dp[curr] = max(take,nottake);
        };
        return f(f,0);
    }
};