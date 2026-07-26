class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        if(n==3)return nums[0]*nums[1]*nums[2];
        int product = 1;
        int first=0;
        int second = 0;
        int third = 0;
        sort(begin(nums), end(nums));
        if(nums[n-1]<0) product = nums[n-3]*nums[n-2]*nums[n-1];
        else if(abs(nums[0])>nums[n-1] && abs(nums[1])>nums[n-2]){
            first = abs(nums[0]);
            second = abs(nums[1]);
            third = nums[n-1];
            product = first*second*third;
        }else if(abs(nums[0]) > nums[n-2] && abs(nums[1]) > nums[n-3]){
            first = nums[n-1];
            second = nums[0];
            third = nums[1];
            product = first*second*third;
        }
        else{
            product = max(nums[n-1]*nums[n-2]*nums[n-3], nums[0]*nums[1]*nums[n-1]);
        }
        return product;
    }
};