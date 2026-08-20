class Solution {
public:
    bool isPossible(int k, vector<int>& piles, int h){
        long long t=0;
        for(auto pile: piles){
            t += (pile+k-1)/k; //ceil(a / b) = (a + b - 1) / b
        }
       
        if(t <= h)return true;
        return false;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int high = *max_element(piles.begin(), piles.end());
        int low = 1;

        int ans = high;
        while(low<=high){
            int mid =  low + (high-low)/2;

            if(isPossible(mid, piles,h)){
                ans = min(ans, mid);
                high = mid-1;
            }else{
                low = mid+1;
            }
        }

        return ans;
    }
};