class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int res = 0;
        unordered_map<int,int>mp;
        mp[0]=1;
        int prevSum = 0;
        for(int i=0;i<n;i++){
            prevSum += nums[i];
            if(mp.count(prevSum - k)){ // O(N)
                res += mp[prevSum-k];
            }
            mp[prevSum] +=1;
        }

        return res;
    }
};