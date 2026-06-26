class Solution {
public:
    long long countMajoritySubarrays(vector<int>& nums, int target) {
        long long result=0LL;
        unordered_map<int,int>mp;
        mp[0]=1;
        int cumSum=0;
        int valLeftPoints=0;
        for(auto &it:nums){
            if(it==target){
                valLeftPoints += mp[cumSum];
                cumSum++;    
            }else{
                cumSum--;
                valLeftPoints -= mp[cumSum];
            }
            mp[cumSum]++;
            result += valLeftPoints;
        }
        return result;
    }
};