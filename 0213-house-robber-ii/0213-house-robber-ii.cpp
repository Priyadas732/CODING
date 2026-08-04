class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        if(n==2) return max(nums[0], nums[1]);
        int next1 = 0;
        int next2 = 0;
        for(int i=n-1;i>0;i--){
            int curr = max(nums[i]+next2, next1);
            next2 = next1;
            next1 = curr;
        }
        int ans1 = next1;
        next1 = 0;
        next2 = 0;
        for(int i=n-2;i>=0;i--){
            int curr = max(nums[i]+next2, next1);
            next2 = next1;
            next1 = curr;
        }
        return max(next1,ans1);
    }
};