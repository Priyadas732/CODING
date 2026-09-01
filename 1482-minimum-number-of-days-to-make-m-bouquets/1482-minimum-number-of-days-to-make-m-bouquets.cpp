class Solution {
public:
    int n;
    bool check(int p, vector<int>& nums, int m, int k){
        int t=0,cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]<=p){
                t++;
                if(t==k){
                    cnt++;
                    t = 0;
                }
            }else{
                t = 0;
            }

            if(cnt==m)return true;
            
        }
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k){
        n = bloomDay.size();
        if(1ll*m*k > bloomDay.size())return -1;

        int maxi = *max_element(bloomDay.begin(), bloomDay.end());
        int mini = *min_element(bloomDay.begin(), bloomDay.end());

        int l = mini;
        int h = maxi;

        int ans = 0;

        while(l<=h){
            int mid = l + (h-l)/2;

            if(check(mid, bloomDay, m, k)){
                ans = mid;
                h = mid-1;
            }else{
                l = mid+1;
            }
        }

        return ans;
    }
};