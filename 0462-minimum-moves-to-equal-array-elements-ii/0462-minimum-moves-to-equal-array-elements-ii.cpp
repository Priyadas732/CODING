class Solution {
public:
    int minMoves2(vector<int>& nums) {
        auto mid = nums.begin() + nums.size()/2; 
        
        ranges::nth_element(nums,mid);
        int res = 0, med = *mid;
        for(int i=0;i<nums.size();i++){
            res += abs(med-nums[i]);
        }
        return res;
    }
};