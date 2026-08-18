class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();

        int ans = -1;

        //case 1: when only one subarray is possible
        if(k==n){
            int max_val=nums[0];
            for(auto num: nums){
                max_val = max(max_val, num);
            }
            return max_val;
        }

        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        // k ==1 
        if(k==1){
            for(auto const& pair: mp){
                if(pair.second == 1){
                    ans = max(ans, pair.first);
                }
            }
        }
        // 1< k < n
        else{
            if(mp[nums[0]]==1){
                ans = max(ans, nums[0]);
            }
            if(mp[nums[n-1]]==1){
                ans = max(ans, nums[n-1]);
            }
        }
        return ans;
    }
};