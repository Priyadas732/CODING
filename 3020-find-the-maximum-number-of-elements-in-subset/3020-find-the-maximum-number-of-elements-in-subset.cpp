class Solution {
public:
    int length(long long key,int freq, unordered_map<long long,int>&mp){
        if(freq==1)return 1; 
        int ans = 1;   
        if(freq>=2){
            long long temp = key*key;
            if(mp.count(temp) > 0){
                ans = 2 + length(temp, mp[temp], mp);   
            }
        }
        return ans;
    }
    int maximumLength(vector<int>& nums) { 
        int n = nums.size();
        unordered_map<long long,int>mp;
        for(auto &it:nums){
            mp[it]++;
        }
        
        int max_len = 1;
        long long prev = 0;
        for(auto &[key, freq]: mp){
            if(key==1)continue;
            int ans = length(key,freq,mp);
            max_len = max(max_len, ans);
        }
        

        if(mp[1]%2!=0) return max(max_len,mp[1]);
        return  max(max_len,mp[1]-1);
    }
};