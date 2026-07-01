#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

class Solution {
public:
    int dir[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

    int maximumSafenessFactor(vector<vector<int>>& grid) {
        int n = grid.size();
        
        // Edge case: if start or end is a thief, safeness is 0
        if (grid[0][0] == 1 || grid[n-1][n-1] == 1) return 0;
        
        // Phase 1: Multi-source BFS to find min distance to any thief
        vector<vector<int>> dist(n, vector<int>(n, -1));
        queue<pair<int, int>> q;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    q.push({i, j});
                    dist[i][j] = 0;
                }
            }
        }
        
        while (!q.empty()) {
            auto [r, c] = q.front();
            q.pop();
            
            for (auto& d : dir) {
                int nr = r + d[0];
                int nc = c + d[1];
                if (nr >= 0 && nr < n && nc >= 0 && nc < n && dist[nr][nc] == -1) {
                    dist[nr][nc] = dist[r][c] + 1;
                    q.push({nr, nc});
                }
            }
        }
        
        // Phase 2: Max-Heap (Dijkstra-like) to find the safest path
        // Priority queue stores: {current_safeness, {row, col}}
        priority_queue<pair<int, pair<int, int>>> pq;
        vector<vector<bool>> vis(n, vector<bool>(n, false));
        
        pq.push({dist[0][0], {0, 0}});
        vis[0][0] = true;
        
        while (!pq.empty()) {
            auto [safe, pos] = pq.top();
            auto [r, c] = pos;
            pq.pop();
            
            // If we reach the bottom-right corner, return the safeness
            if (r == n - 1 && c == n - 1) {
                return safe;
            }
            
            for (auto& d : dir) {
                int nr = r + d[0];
                int nc = c + d[1];
                
                if (nr >= 0 && nr < n && nc >= 0 && nc < n && !vis[nr][nc]) {
                    vis[nr][nc] = true;
                    // The path's safeness is bottlenecked by the minimum cell on it
                    int min_safe_on_path = min(safe, dist[nr][nc]);
                    pq.push({min_safe_on_path, {nr, nc}});
                }
            }
        }
        
        return 0;
    }
};