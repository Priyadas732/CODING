class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = INT_MAX;
        int maxProfit = 0;
        for(auto price: prices){
            if(buy < price){
                maxProfit = max(maxProfit, price-buy);
            }else{
                buy = min(buy, price);
            }
        }

        return maxProfit;
    }
};