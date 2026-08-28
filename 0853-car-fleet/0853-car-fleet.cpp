class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {

        int n = position.size();

        vector<pair<int, float>> cars;

        for(int i = 0; i < n; i++) {
            float time = (float)(target - position[i]) / speed[i];
            cars.push_back({position[i], time});
        }

        sort(cars.begin(), cars.end());

        int fleet = 1;
        float prevTime = cars[n-1].second;

        for(int i = n-2; i >= 0; i--) {

            if(cars[i].second > prevTime) {
                fleet++;
                prevTime = cars[i].second;
            }
        }

        return fleet;
    }
};