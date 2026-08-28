class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();

        vector<int>res;

        for(int i = 0; i < n; i++) {
            int survive = asteroids[i];

            while(!res.empty() && res.back() > 0 && survive < 0) {

                int curr = res.back();
                res.pop_back();

                if(abs(survive) < curr) {
                    survive = curr;
                    break;
                }
                else if(abs(survive) == curr) {
                    survive = 0;
                    break;
                }
                // if abs(survive) > curr,
                // curr is destroyed and we continue
            }

            if(survive != 0) {
                res.push_back(survive);
            }
        }

        return res;
    }
};