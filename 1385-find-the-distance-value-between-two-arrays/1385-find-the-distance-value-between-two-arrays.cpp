class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count = 0;
        for(auto a: arr1){
            bool greater = true;
            for(auto b: arr2){
                if(abs(a-b) <= d){
                    greater = false;
                }
            }
            if(greater==true)count++;
        }

        return count;
    }
};