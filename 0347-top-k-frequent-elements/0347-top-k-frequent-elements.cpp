class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Bucket approach
        int n = nums.size();
        unordered_map<int, int>freq; // SC-> O(N)

        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        vector<vector<int>>bucket(n+1);

        for(auto &[element, frequency] : freq){ 
            bucket[frequency].push_back(element);
        }

        vector<int>res;

        for (int i = n; i > 0 && res.size() < k; i--) {
            for (int num : bucket[i]) {
                res.push_back(num);
                if (res.size() == k) break;
            }
        }

        return res;
    }
};