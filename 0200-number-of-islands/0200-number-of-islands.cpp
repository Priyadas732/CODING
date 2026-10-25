class Solution {
public:
    int m;
    int n;
    int dist[4][2] = {{1,0}, {-1,0}, {0,1}, {0,-1}};
    void dfs(int i, int j, vector<vector<char>>& grid, vector<vector<int>>&vis){
        vis[i][j] = 1;
        
        for(int d=0;d<4;d++){
            int nr = i+dist[d][0];
            int nc = j+dist[d][1];
            if(nr>=0 && nr<m && nc>=0 && nc<n && vis[nr][nc]==-1 && grid[nr][nc]=='1'){
                dfs(nr,nc, grid, vis);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty() || grid[0].empty()) {
            return 0;
        }
        int res = 0;
        m = grid.size();
        n = grid[0].size();
        
        vector<vector<int>>vis(m, vector<int>(n, -1));
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1' && vis[i][j]==-1){
                    dfs(i,j,grid,vis);
                    res++;
                }
            }
        }
        return res;
    }
};