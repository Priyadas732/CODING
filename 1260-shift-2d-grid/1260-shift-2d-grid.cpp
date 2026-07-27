class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {

        int m = grid.size();
        int n = grid[0].size();

        int total = m * n;
        k %= total;

        vector<vector<int>> ans(m, vector<int>(n));

        for (int i = 0; i < total; i++) {

            int oldRow = i / n;
            int oldCol = i % n;

            int newIndex = (i + k) % total;

            int newRow = newIndex / n;
            int newCol = newIndex % n;

            ans[newRow][newCol] = grid[oldRow][oldCol];
        }

        return ans;
    }
};                                                      