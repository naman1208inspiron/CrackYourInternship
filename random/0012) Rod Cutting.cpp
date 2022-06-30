class Solution{
    int dp[1001];
    int find(int len, vector<int> &prices){
        if(len==0) return 0;
        
        if(dp[len] != -1) return dp[len];
        
        int ans= 0;
        for(int lenToCut= 1; lenToCut <=prices.size(); lenToCut++){
            if(len >= lenToCut){
                //suppose totalLen= 4 &&  lenToCut= 1--> to rod will be divided into 1 and 3
                // 1 ka price --> price[0] hoga aur 3 length ke rod ka maximum price from recursion.
                int currAns= prices[lenToCut -1] + find(len-lenToCut, prices);
                ans= max(ans, currAns);
            }
        }
        return dp[len]= ans;
    }
  public:
    int cutRod(int price[], int n) {
        memset(dp, -1, sizeof(dp));
        
        vector<int>prices(price, price+n);
        return find(n, prices);
    }
};
