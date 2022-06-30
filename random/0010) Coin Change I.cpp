// https://leetcode.com/problems/coin-change/
class Solution {
    int dp[10001];
    
    //finds the minimum number of coins needed for 'amt' amount. 
    int find(vector<int>& coins, int amt){
        if(amt==0) return 0;
        
        if(dp[amt]!= -1) return dp[amt];
        
        int ans= INT_MAX;
      // checking for each possibiliy 
        for(int i=0; i<coins.size(); i++){
            if(amt >= coins[i]){
                ans= min( 1LL + find(coins, amt-coins[i]) , ans + 0LL );
            }
        }
        return dp[amt]= ans;
    }
public:
    int coinChange(vector<int>& coins, int amount) {
        dp[amount];
        memset(dp, -1, sizeof(dp));
        int ans= find(coins, amount);
        return ans==INT_MAX ? -1 : ans;
    }
};
