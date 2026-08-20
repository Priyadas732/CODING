class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        vector<int>indegree(numCourses, 0);

        for(auto it: prerequisites){
            int u = it[1];
            int v = it[0];
            adj[u].push_back(v);
            indegree[v]++;
        }

        vector<int>topo;
        queue<int>q;
        for(int i=0;i<indegree.size();i++){
            if(indegree[i]==0) q.push(i);
        }
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            topo.push_back(node);
            for(auto x: adj[node]){
                indegree[x]--;
                if(indegree[x]==0) q.push(x);
            }
        }

        if(topo.size()==numCourses) return true;
        return false;
    }
};