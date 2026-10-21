class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>ans;
        vector<int>v;
        auto f = [&](auto && self, int idx)->void{
            if(idx==n){
                ans.push_back(v);
                return;
            }

            self(self,idx+1);
            v.push_back(nums[idx]);
            self(self,idx+1);
            v.pop_back();
        };
        
        f(f,0);
        return ans;
    }
};