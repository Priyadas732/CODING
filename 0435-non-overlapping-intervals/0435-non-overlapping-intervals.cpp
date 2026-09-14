class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end(), [&](auto &a,auto &b){
            return a[1]<b[1];
        });
        int cnt =0;
        int prevS = intervals[0][0];
        int prevE = intervals[0][1];
        for(int i=1;i<n;i++){
            int currS = intervals[i][0];
            int currE = intervals[i][1];
            if(currS >= prevE){
                prevS = currS;
                prevE = currE;
            }
            else{
                cnt++;
            }
        }
                
        return cnt;
    }
};