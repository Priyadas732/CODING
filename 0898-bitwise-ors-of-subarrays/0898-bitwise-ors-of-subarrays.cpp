class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        unordered_set<int>res, prev;
        for(int i=0;i<arr.size();i++){
            unordered_set<int>curr;
            for(auto itr: prev){
                curr.insert(itr|arr[i]);
            }
            curr.insert(arr[i]);
            for(auto it: curr){
                res.insert(it);
            }
            prev = curr;
        }
        
        return res.size();
    }
};