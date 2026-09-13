class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size(); 
        int jumps =  0;
        int l=0, r=0;
        //TC -> O(N) SC-> O(1)
        while(r<n-1){
            int farthest = 0;
            for(int j=l;j<=r;j++){
                farthest = max(j+nums[j], farthest);
            }
            l = r+1;
            r = farthest;
            jumps++;
        }

        return jumps;
    }
};