class Solution
{
    public:
    int dp[1000][1000];
    int helper(int wt[], int val[], int w, int n){
        for(int i=0; i<=n; i++){
            for(int j=0; j<=w; j++){
                if(i==0 || j==0) dp[i][j]=0;
            }
        }
        
        for(int i=1; i<=n; i++){
            for(int j=1; j<=w; j++){
                
                if(wt[i-1]<= j){
                    dp[i][j]= max( val[i-1]+ dp[i-1][j-wt[i-1]], dp[i-1][j]);
                }
                else dp[i][j]= dp[i-1][j];
            }
            
        }
        return dp[n][w];
    }
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    {
        // int dp[n+1][W+1];
        memset(dp, -1, sizeof(dp));
        return helper(wt, val, W, n);
    }
};
