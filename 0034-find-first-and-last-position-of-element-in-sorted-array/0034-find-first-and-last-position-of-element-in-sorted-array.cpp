class Solution {
public:
    int findFirst(vector<int>& nums, int target){
        int start = 0, end = nums.size() - 1, idx = -1;
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(nums[mid] == target){
                idx = mid;
                end = mid-1;
            }
            else if(nums[mid] < target){
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return idx;
    }

    int findLast(vector<int>& nums, int target){
        int start = 0, end = nums.size() - 1, idx = -1;
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(nums[mid] == target){
               idx = mid;
               start = mid+1;
            } 
            else if(nums[mid] < target){
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return idx;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first = findFirst(nums, target);
        int last = findLast(nums, target);
        return {first, last};
    }
};