class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<int>v(n, false);
        v[0] = true;
        for(int i=1;i<n;i++){
            int j = i-1;
            while(j>=0){
                if(v[j]==true && j+nums[j] >= i){
                    v[i]=true;
                    break;
                }
                j--;
            }
        }
        return v[n-1];
    }
};