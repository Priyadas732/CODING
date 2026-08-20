class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;// (freq, element)
        unordered_map<int, int>freq;

        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        for(auto &[element, frequency] : freq){
            pq.push({frequency, element});
            while(pq.size()>k){
                pq.pop();
            }
        }
        vector<int>res;

        while(!pq.empty()){
            auto it = pq.top();
            res.push_back(it.second);
            pq.pop();
        }

        return res;
    }
};