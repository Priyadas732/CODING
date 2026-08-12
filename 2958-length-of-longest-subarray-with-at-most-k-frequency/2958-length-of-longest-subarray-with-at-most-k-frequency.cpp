class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0, j=0;
        unordered_map<int,int>freq;

        int maxL = 0;
        int len=0;
        while(j<n){

            freq[nums[j]]++;

            while(freq[nums[j]] > k){
                freq[nums[i]]--;
                i++;
            }
            
            maxL = max(maxL, j-i+1);
            j++;
        }
        return  maxL;
    }
};