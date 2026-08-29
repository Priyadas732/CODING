class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<vector<int>>adj(n);

        for(int i=0;i<n;i++){
            for(int j=0;j<rooms[i].size();j++)
                adj[i].push_back(rooms[i][j]);
        }

        vector<int>vis(n,-1);
        queue<int>q;
        q.push(0);
        vis[0] = 1;

        while(!q.empty()){
            int node = q.front();
            q.pop();

            for(auto it: adj[node]){
                if(vis[it]==-1){
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }

        for(int i=0;i<n;i++){
            if(vis[i]==-1)return false;
        }

        return true;
    }
};