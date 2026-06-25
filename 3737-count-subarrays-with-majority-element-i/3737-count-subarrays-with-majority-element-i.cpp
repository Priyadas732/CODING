class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int>prefixSum(n);
        int t = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==target)t++;
            prefixSum[i]=t;
        }
        
        int ans = 0;
        for(int i=0;i<n;i++){
            int size = i-0+1;
            int val = prefixSum[i];
            int j=0;
            while(size>0){
                if(val> size/2){
                    ans++;
                }
                size--;
                val = prefixSum[i] - prefixSum[j];
                j++;
            }
        }
        return ans;
    }
};