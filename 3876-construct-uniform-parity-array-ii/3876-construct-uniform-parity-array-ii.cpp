class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        sort(nums1.begin(),nums1.end());
        vector<int>prefixodd(n+1),prefixeven(n+1);
        for(int i=1;i<=n;i++){
            prefixodd[i] = prefixodd[i-1] + (nums1[i-1]&1);
            prefixeven[i] = prefixeven[i-1] + !(nums1[i-1]&1);
        }
        bool flag1=true;
        bool flag2 = true;
        for(int i=0;i<n;i++){
            if(nums1[i]&1) continue;
            if(prefixodd[i]==0){
                flag1 = false;
                break;
            }
        }
        if(flag1==true) return true;
        for(int i=0;i<n;i++){
            if(nums1[i]%2==0) continue;
            if(prefixodd[i]==0){
                flag2 = false;
                break;
            }
        }
        if(flag2==true) return true;
        return false;
    }
};