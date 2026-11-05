class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        if(matrix.empty())return ans;
        int srow = 0, erow = matrix.size()-1;
        int scol = 0, ecol = matrix[0].size()-1;

        while(srow<=erow && scol<=ecol){
            // top row
            for(int i=scol;i<=ecol;i++){
                ans.push_back(matrix[srow][i]);
            }
            srow++;
            // right col
            for(int i=srow;i<=erow;i++){
                ans.push_back(matrix[i][ecol]);
            }
            ecol--;
            // bottom row
            if(srow <= erow){
                for(int i=ecol;i>=scol;i--){
                    ans.push_back(matrix[erow][i]);
                }
                erow--;
            }

            // left col
            if(scol <= ecol){
                for(int i=erow;i>=srow;i--){
                    ans.push_back(matrix[i][scol]);
                }
                scol++;
            }
        }

        return ans;
    }
};