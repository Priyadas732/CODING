class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int res = 0;
        for(int i=0;i<n;i++){
            unordered_map<int,int>freq;

            for(int j=i;j<n;j++){
                freq[nums[j]]++;
                int t = freq.size();
                res += t*t;
            }
        }

        return res;
        
    }
};