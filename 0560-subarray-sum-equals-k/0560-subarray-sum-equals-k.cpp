class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int res = 0;
        map<int,int>mp;
        mp[0]=1;
        int prevSum = 0;
        for(int i=0;i<n;i++){
            prevSum += nums[i];
            int curr = prevSum - k;
            res += mp[curr];
            mp[prevSum] +=1;
        }

        return res;
    }
};