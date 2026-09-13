class Solution {
public:
    int n;
    int t[10001];
    int solve(int idx, vector<int>& nums){
        if(idx>=n-1)return 0;
        
        if(t[idx] !=-1) return t[idx];

        int minJumps = 1e9;
        for(int i=1;i<=nums[idx];i++){
            if(idx+i<n){
                minJumps = min(minJumps, 1 +  solve(idx+i, nums));
            }
        }
        return t[idx] = minJumps;
    }
    int jump(vector<int>& nums) {
        n = nums.size();
        memset(t, -1, sizeof(t));
        return solve(0,nums);
    }
};