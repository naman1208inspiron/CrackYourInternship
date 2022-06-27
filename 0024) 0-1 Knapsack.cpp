class Solution
{
    public:
    int dp[1001][1001];
    int helper(int wt[], int val[], int w, int n){
        if(n==0 || w==0) return 0;
        
        if(dp[w][n]!= -1) return dp[w][n];
        if(wt[n-1] <= w){
            int take= val[n-1] + helper(wt, val, w-wt[n-1], n-1);
            int notTake= helper(wt, val, w, n-1);
            return dp[w][n]= max(take, notTake);
        }
        return dp[w][n]= helper(wt, val, w, n-1);
    }
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    {
        memset(dp, -1, sizeof(dp));
        // for me--> w= remaining weight, n= no of itmes left
        return helper(wt, val, W, n);
    }
};
//`````````````````````````````````````````````````````````````````````````````````
class Solution
{
    public:
    int dp[1001][1001];
    int helper(int wt[], int val[], int w, int n, int N){
        if(n== N || w==0) return 0;
        
        if(dp[w][n]!= -1) return dp[w][n];
        if(wt[n] <= w){
            int take= val[n] + helper(wt, val, w-wt[n], n+1, N);
            int notTake= helper(wt, val, w, n+1, N);
            return dp[w][n]= max(take, notTake);
        }
        return dp[w][n]= helper(wt, val, w, n+1, N);
    }
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    {
        memset(dp, -1, sizeof(dp));
        // for me--> w= remaining weight, 0= curr index
        return helper(wt, val, W, 0, n);
    }
};
