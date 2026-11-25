class Solution {
    static const int MAX_LEN = 100005; 
    static unsigned long long power[MAX_LEN];
    static bool initialized;

public:
    static const int base = 131071; 

    Solution() {
        if (!initialized) {
            power[0] = 1;
            for (int i = 1; i < MAX_LEN; i++) {
                power[i] = power[i - 1] * base; 
            }
            initialized = true;
        }
    }
public:
    int smallestUniqueSubarray(vector<int>& nums) {
        int n = nums.size();
        int low = 1;
        int high = n;
        int ans = 0;
        unordered_map<unsigned long long,int> check; 
        auto f = [&](int size) -> bool {
            check.clear();
            unsigned long long hash = 0;
            for(int i = 0; i < size; i++) {
                hash = hash * base + nums[i];
            }
            
            check[hash]++;
            for (int right = size; right < n; right++) {
                int left = right - size;
                hash = hash * base + nums[right];
                hash = hash - nums[left] * power[size];
                check[hash]++;
            }
            for(const auto& itr: check){
                if(itr.second==1)return true;
            }
            return false;
        };
        while(low <= high) {
            int mid = low + ((high - low) >> 1);
            if(f(mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};
unsigned long long Solution::power[Solution::MAX_LEN];
bool Solution::initialized = false;