class Solution {
    int dp[301][5001];
    //finds the ways for getting amount using all the combos of coin at the current index.
    int find(int ind, int amt, vector<int>& coins){
        if(amt==0) return 1;
        if(ind < 0) return 0;
        
        if(dp[ind][amt] != -1) return dp[ind][amt];
        
        int ways= 0;
        for(int coinAmt= 0; coinAmt<= amt; coinAmt+= coins[ind]){
            ways+= find(ind-1, amt-coinAmt, coins);
        }
        return dp[ind][amt] = ways;
    }
public:
    int change(int amount, vector<int>& coins) {
        memset(dp, -1, sizeof(dp));
        int ans= find(coins.size()-1, amount, coins);
        return ans;
    }
};


//```````````````````using Knapsack concept````````````````````
class Solution {
    int dp[301][5001];
    //finds the ways for getting amount using all the combos of coin at the current index.
    int find(int ind, int amt, vector<int>& coins){
        if(amt==0) return 1;
        if(ind < 0 || amt <0) return 0;
        
        if(dp[ind][amt] != -1) return dp[ind][amt];
        
        int take   = find(ind  , amt- coins[ind], coins);
        int notTake= find(ind-1, amt,             coins);
        return dp[ind][amt]= a+b;
    }
public:
    int change(int amount, vector<int>& coins) {
        memset(dp, -1, sizeof(dp));
        int ans= find(coins.size()-1, amount, coins);
        return ans;
    }
};


//finds number of ways for getting desired amount.
//     int find(int amt, vector<int> &coins){
//         if(amt== 0) return 1;
        
//         int ways= 0;
//         for(int i=0; i<coins.size(); i++){
//             if(amt >= coins[i]){
//                 ways+= find(amt- coins[i], coins);
//             }
//         }
//         return ways;
//     }
//----> the above code will also consider the duplicates combination. 

//finds number of ways for getting desired amount.
//     int find(int amt, vector<int> &coins){
//         if(amt== 0) return 1;
        
//         int ways= 0;
//         for(int i=0; i<coins.size(); i++){
//             if(amt >= coins[i]){
//                 ways+= find(amt- coins[i], coins);
//             }
//         }
//         return ways;
//     }
//----> the above code will also consider the duplicates combination. 
