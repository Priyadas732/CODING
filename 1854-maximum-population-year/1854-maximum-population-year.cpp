class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        
        map<int,int>mp;
        for(auto &it: logs){
            int s = it[0];
            int e = it[1];
            mp[s]+=1;
            mp[e]-=1;
        }

        int maxS = 0;
        int year = 0;
        int sum = 0;
        for(auto [y,v]: mp){
            sum += v;
            if(sum > maxS){
                maxS = sum;
                year = y;
            }
        }

        return year;
    }
};