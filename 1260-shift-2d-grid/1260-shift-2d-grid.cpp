class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        
        for(int i=0;i<k;i++){ 
            int l = grid[m-1][n-1];
            int f = grid[0][n-1];
            for(int row=0;row<m;row++){
                int t = grid[row][n-1];
                for(int col=n-2;col>=0;col--){
                    grid[row][col+1] = grid[row][col];
                }
                
                if(row>0){
                    grid[row][0] = f;
                    f = t;
                }
            }
            grid[0][0] = l;
        }
        return grid;
    }
};