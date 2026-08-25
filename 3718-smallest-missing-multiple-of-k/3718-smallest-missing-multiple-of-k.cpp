class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        int res = INT_MAX;
        set<int>st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        
        int i=1;
        while(k*i<=10000){
            if(st.find(k*i)==st.end()){
                res = k*i;
                return res;
            }
            i++;
        }

        return res;
    }
};