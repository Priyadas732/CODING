class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(n+2,0);
        for(int i=n-1;i>=0;i--){
            v[i] = max(nums[i]+v[i+2], v[i+1]);
        }
        return v[0];
    }
};