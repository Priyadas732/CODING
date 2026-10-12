class Solution {
public:
    const int MOD = 1e9+7; 
    int maxSum(vector<int>& nums, int k) {
        int n = nums.size();
        
        vector<int>count(32,0);

        for(int i=0;i<n;i++){
            int num = nums[i];
            for(int bit=0;bit<=31;bit++){
                if((num>>bit)&1){
                    count[bit]++;
                }
            }
        }

        for(int i=0;i<32;i++){
            cout<<count[i]<<" ";
        }
        
        long long res = 0;
        while(k--){
            long long curr = 0;
            for(int i=0;i<32;i++){
                if(count[i]>0){
                    count[i]--;
                    curr = curr | (1<<i);
                }
            }

            res = (res + (curr*curr))%MOD;
        }
        return res;
    }
};