class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(begin(intervals), end(intervals));
        int overlap=0;
        int prevS = intervals[0][0];
        int prevE = intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            int currS = intervals[i][0];
            int currE = intervals[i][1];
            
            if(currS==prevS){
                overlap++;
                prevS = currS;
                prevE = currE;
            }else{
                if(prevE>=currE)overlap++;
                else{
                    prevS = currS;
                    prevE = currE;
                }
            }
            
        }
        return intervals.size()-overlap;
    }
};