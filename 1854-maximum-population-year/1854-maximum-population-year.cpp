class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int>diff(2051,0);

        for(auto &it: logs){
            int s = it[0];
            int e = it[1];

            diff[s] += 1;
            diff[e] -= 1;

        }

        int maxS = 0;
        int year = 0;

        for(int i=1;i<2051;i++){
            diff[i] += diff[i-1];
            if(diff[i] > maxS){
                maxS = diff[i];
                year = i;
            }
        }

        return year;
    }
};