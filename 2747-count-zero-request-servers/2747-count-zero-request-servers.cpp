class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs, int x, vector<int>& queries) {
        int m = logs.size();
        // sort logs acc to time
        sort(logs.begin(), logs.end(), [](const auto & a, const auto &b){
            return a[1] < b[1];
        });
        int q = queries.size();
        vector<int>res(q);
        vector<pair<int,int>>timeIndex(q); //{time, originalIndex}
        for(int i=0;i<q;i++){
            timeIndex[i] = {queries[i], i};
        }
        sort(timeIndex.begin(), timeIndex.end()); //on the basis of time sort

        unordered_map<int,int>mp;
        int i=0;
        int j = 0;
        for(auto [time, idx]: timeIndex){
            // Range
            int start = time-x;
            int end = time;

            //Expansion
            while(j<m && logs[j][1] <= end){
                mp[logs[j][0]]++;
                j++;
            }

            // shrinking
            while(i<m && logs[i][1] < start){
                mp[logs[i][0]]--;
                if(mp[logs[i][0]]==0) mp.erase(logs[i][0]);
                i++;
            }

            res[idx] = n - mp.size(); //mp.size = # of servers getting request in [start, end]
        }
        return res;
    }
};