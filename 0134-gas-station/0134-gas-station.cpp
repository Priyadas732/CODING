class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        long long gas_sum = accumulate(gas.begin(), gas.end(), 0LL);
        long long cost_sum = accumulate(cost.begin(), cost.end(), 0LL);

        if (gas_sum < cost_sum) return -1;

        int total = 0;
        int result = 0;

        for(int i=0;i<n;i++){
            total = total + gas[i] - cost[i];
            if(total < 0){
                total = 0;
                result = i+1;
            }
        }
        
        return result;
    }
};