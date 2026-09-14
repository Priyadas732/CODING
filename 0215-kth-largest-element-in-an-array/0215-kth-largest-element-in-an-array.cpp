class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>>mq;

        for(int i=0;i<nums.size();i++){
            mq.push(nums[i]);
        }

        for(int i=1;i<k;i++){
            mq.pop();
        }

        return mq.top();
    }
};