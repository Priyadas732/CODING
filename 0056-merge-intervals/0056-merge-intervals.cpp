class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        vector<vector<int>>res;
        res.push_back({intervals[0][0], intervals[0][1]});
        for(int i=1;i<n;i++){
            auto it = res.back();
            int ps = it[0];
            int pe = it[1];
            int cs = intervals[i][0];
            int ce = intervals[i][1];
            if(pe>=cs){
                res.pop_back();
                if(pe>=ce){
                    res.push_back({ps,pe});
                }
                else res.push_back({ps, ce});
            }else{
                res.push_back({cs, ce});
            }
        }
        return res;
    }
};