class Solution {
public:
    vector<vector<int>>directions = {{1,0},{0,1},{-1,0},{0,-1}};
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        int m = grid.size();
        int n = grid[0].size();
        deque<pair<int,int>>dq;
        
        dq.push_front({0,0});

        vector<vector<int>>result(m, vector<int>(n, INT_MAX));
        result[0][0] = grid[0][0];
        while(!dq.empty()){
            auto [r,c] = dq.front();
            dq.pop_front();

            for(auto& dir: directions){
                int nr = r+dir[0];
                int nc = c+dir[1];

                if(nr <0 || nc < 0 || nr>=m || nc >=n)continue;
                if(result[nr][nc] > result[r][c] + grid[nr][nc]){
                    result[nr][nc] = result[r][c] + grid[nr][nc];
                    if(grid[nr][nc]==0){
                        dq.push_front({nr,nc});
                    }else{
                        dq.push_back({nr,nc});
                    }
                }
            }
        }
        int x = result[m-1][n-1];

        return health-x >=1;
    }
};