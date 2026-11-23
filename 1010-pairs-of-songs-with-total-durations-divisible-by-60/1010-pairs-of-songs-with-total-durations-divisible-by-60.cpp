class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int n = time.size();
        int ans = 0;
        int freq[60] = {0};
        for(int x: time){
            int rem = x%60;
            int complement = (60-rem)%60;
            ans += freq[complement];
            freq[rem]++;
        }

        return ans;
    }
};