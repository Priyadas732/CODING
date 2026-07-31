class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int sum = 0;
    int max_sum = nums[0];
    for(int i=0;i<nums.size();i++){
        if(nums.size()==1) return nums[i];
        if(nums.size() == 2 && nums[i]<0){
            if(nums[i]<nums[i+1]) return nums[i+1];
            else return nums[i];
        }
        if(sum < 0) {
            sum = 0;
        }
         sum+=nums[i];
        max_sum = max(max_sum, sum);
    }
    // int current_sum = 0;
    // int max_sum = nums[0];  // Initialize max_sum to the first element

    // for (int num : nums) {
    //     if (current_sum < 0) {
    //         current_sum = 0;  // Reset if the current sum is negative
    //     }
    //     current_sum += num;
    //     max_sum = max(max_sum, current_sum);
    // }
    return max_sum;
    }
    
};