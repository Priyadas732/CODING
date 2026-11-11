class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        
        long long t1 = 1LL*cost1*need1 + 1LL*cost2*need2;
        long long t2 = 1LL*costBoth*max(need1, need2);
        long long t3 = LLONG_MAX;
        long long t4 = LLONG_MAX;
        if(need1 > need2){
            t3 = 1LL*(need1-need2)*cost1 + 1LL*costBoth*need2;
        }
        if(need1<=need2){
            t4 = 1LL*(need2-need1)*cost2 + 1LL*costBoth*need1;
        }
        return min({t1,t2,t3,t4});
    }
};