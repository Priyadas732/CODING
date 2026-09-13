class Solution {
public:
    int n;
    int check(int rofs, int cofs, vector<vector<int>>& img1, vector<vector<int>>& img2){
        int cnt = 0;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int r = i+rofs;
                int c = j+cofs;
                if(r>=0 && r<n && c<n && c>=0 && img1[r][c]==img2[i][j] && img2[i][j]==1){
                    cnt++;
                }
            }
        }
        return cnt;
    }
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        n = img1.size();
        int maxiOverlap = 0;

        for(int i=-n+1;i<n;i++){
            for(int j=-n+1;j<n;j++){
                int overlap = check(i,j,img1,img2);
                maxiOverlap = max(maxiOverlap, overlap);
            }
        }

        return maxiOverlap;
    }
};