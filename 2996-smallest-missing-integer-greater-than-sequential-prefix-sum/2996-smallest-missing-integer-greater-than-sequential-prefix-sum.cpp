class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0]+1;
        int sum = nums[0];
        int prev = nums[0];
        
        for(int i=1;i<n;i++){
            if(nums[i] == prev+1){
                sum += nums[i];
                prev = nums[i];
            }
            else break;
        }
        while(find(nums.begin(), nums.end(), sum) != nums.end()){
            sum++;
        }
        return sum;
    }
};