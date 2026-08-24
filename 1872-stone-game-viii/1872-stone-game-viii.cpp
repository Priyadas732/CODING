class Solution {
public:
    int n;
    
    int stoneGameVIII(vector<int>& stones) {
        n = stones.size();
        if(n==2) return stones[0]+stones[1];
        vector<int>prefix(n);

        prefix[0] = stones[0];
        for(int i=1;i<n;i++){
            prefix[i] = prefix[i-1]+stones[i];
        }

        int f = prefix[n-1];
        for(int i=n-2; i>=1;i--){
            f = max(f, prefix[i]-f);
        }
        return f;
    }
};