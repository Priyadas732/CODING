class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>>zero;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0)zero.push_back({i,j});
            }
        }
        for(auto it: zero){
            int r = it[0];
            int c = it[1];
            for(int i=0;i<n;i++){
                matrix[r][i] = 0;
            }
            for(int i=0;i<m;i++){
                matrix[i][c] = 0;
            }
        }
        
    }
};