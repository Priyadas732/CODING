class Solution {
public:
    long long maxBalancedSubsequenceSum(vector<int>& nums) {
        int n = nums.size();
        map<int, long long>mp; // <key, sum> => <nums[i]-i, sum>

        long long result = INT_MIN;

        for(int i=0;i<n;i++){
            
            auto it = mp.upper_bound(nums[i]-i); //it->first (nums[i]-i), it->second: sum 

            long long sum = nums[i];

            if(it != mp.begin()){
                it--;
                sum += it->second;
            }

            mp[nums[i]-i] = max(sum, mp[nums[i]-i]);

            it = mp.upper_bound(nums[i]-i); 
            while(it != mp.end() && it->second <= sum){
                mp.erase(it++);
            }

            result = max(result, sum);
        }
        return result;
    }
};