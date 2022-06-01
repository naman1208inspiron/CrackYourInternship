class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0, buy=prices[0];
        for(int i=0; i<prices.size(); i++){
            buy= min(buy, prices[i]);
            maxprofit= max(maxprofit, prices[i]-buy);
        }
        return maxprofit;
    }
};
