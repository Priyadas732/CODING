class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(), nums.end());
        
        int max_len = 0;

        for(int x: st){
            if(st.find(x-1)==st.end()){
                int curr = x;
                int len = 1;

                while(st.find(curr+1) != st.end()){
                    len++;
                    curr++;
                }

                max_len = max(max_len, len);
            }
        }

        return max_len;
    }
};