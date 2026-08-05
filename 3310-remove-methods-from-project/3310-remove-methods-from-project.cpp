class Solution {
public:
    void dfs(vector<vector<int>>&adj,vector<int>&indegree,vector<bool>&suspicious,int k){
        suspicious[k]= true;
        for(auto node: adj[k]){
            indegree[node]--;
            if(suspicious[node]==false)dfs(adj, indegree, suspicious,node);
        }
    }
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        // adjacency list
        vector<vector<int>>adj(n);
        vector<int>indegree(n,0);
        vector<bool>suspicious(n, false);

        for(auto it:invocations){
            int u = it[0];
            int v = it[1];
            adj[u].push_back(v);
            indegree[v]++;
        }
        
        dfs(adj,indegree,suspicious, k);

        vector<int>result;
        bool cannotremove=false;
        for(int i=0;i<n;i++){
            if(suspicious[i] && indegree[i]>0){
                //we cannot remove anything just return all elements in result
                cannotremove = true;
                break;
            }
            if(!suspicious[i]){
                result.push_back(i);
            } 
        }
        if(cannotremove){
            vector<int>vec(n);
            for(int i=0;i<n;i++){
                vec[i]=i;
            }
            return vec;
        }
        return result;
    }
};