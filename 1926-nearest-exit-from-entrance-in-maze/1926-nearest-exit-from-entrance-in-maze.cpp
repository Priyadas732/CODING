class Solution {
public:
    int dir[4][2] = {{0,1}, {1,0}, {0,-1},{-1,0}};
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int m = maze.size();
        int n = maze[0].size();

        int er = entrance[0]; 
        int ec = entrance[1];

        queue<pair<int,int>>q;
        q.push({er,ec});
        // mark visited by making it a wall '+'
        maze[er][ec] = '+';

        int steps =0;
        while(!q.empty()){
            int N = q.size();
            while(N--){
                auto [r,c] = q.front();
                q.pop();
                if((r==0 || r==m-1 || c==0 || c==n-1) && !(r==er && c==ec)){
                    return steps;
                }
                //explore the neighbour
                for(auto d: dir){
                    int nr = r + d[0];
                    int nc = c + d[1];

                    if(nr>=0 && nr<m && nc>=0 && nc<n && maze[nr][nc]!='+'){
                        q.push({nr,nc});
                        maze[nr][nc] = '+';
                    }
                }
            }
            steps++;
        }

        return -1;
    }
};