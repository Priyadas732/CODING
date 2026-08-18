class Solution {
public:
    int t[501][501];
    int stoneGameV(vector<int>& stoneValue) {
        int n = stoneValue.size();
        if(n==1) return 0;

        vector<int>prefix(n+1);
        for(int i=0;i<n;i++) prefix[i+1] = prefix[i] + stoneValue[i];
        
        memset(t, -1, sizeof(t));
        auto f = [&](auto&& self,int left,int right)->int{
            if(left>=right) return 0;

            if(t[left][right] !=-1) return t[left][right];
            int maxi =0;
            for(int mid = left; mid < right; mid++){
                int lefthalf = prefix[mid+1] - prefix[left];
                int righthalf = prefix[right+1] - prefix[mid+1];
                if(lefthalf>righthalf){
                    maxi = max(maxi,righthalf + self(self,mid+1,right));
                }
                else if(lefthalf<righthalf){
                    maxi= max(maxi,lefthalf+self(self,left,mid));
                }
                else{
                    maxi = max({maxi,lefthalf+self(self,left,mid),righthalf+self(self,mid+1,right)});
                }
            }
            return t[left][right] = maxi;
        };
        return f(f,0,n-1);
       
    }
};