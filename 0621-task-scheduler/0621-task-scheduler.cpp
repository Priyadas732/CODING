class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> v(26,0);
        for(auto &ch: tasks) v[ch-'A']++;

        int ans  = 0;
        priority_queue<int> pq;
        for(int i=0;i<v.size();i++){
            if(v[i] >0) pq.push(v[i]);
        }

        while(!pq.empty()){
            vector<int>temp;
            for(int i=0;i<n+1;i++){
                if(!pq.empty()){
                   int freq = pq.top();
                   pq.pop();
                   freq--;
                   temp.push_back(freq);
                }
            }

            for(int &it: temp){
                if(it>0) pq.push(it);
            }

            if(pq.empty()) ans += temp.size();
            else ans += (n+1);
        }
        return ans;
    }
};