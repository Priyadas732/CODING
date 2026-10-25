class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n = numCourses;
        vector<vector<int>>adj(n);
        vector<int>indegree(n,0);
        for(auto it: prerequisites){
            int u = it[1];
            int v = it[0];
            adj[u].push_back(v);
            indegree[v]++;
        }

        queue<int>q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0)q.push(i);
        }

        vector<int>res;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            res.push_back(node);

            for(auto v: adj[node]){
                indegree[v]--;
                if(indegree[v]==0)q.push(v);
            }
        }

        if(res.size()==n)return true;
        return false;
    }
};