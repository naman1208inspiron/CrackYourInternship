class Solution{
    int dp[1000][1000];
public:
    int helper(int wt[], int val[], int w, int n, int currInd){
        if(w==0 || currInd== n) return 0;
        if(dp[currInd][w]!= -1) return dp[currInd][w];
        if(wt[currInd]<= w){
            int take   = val[currInd] + helper(wt, val, w-wt[currInd], n, currInd  );
            int notTake=                helper(wt, val,        w    ,  n, currInd+1);
            return dp[currInd][w]= max(take, notTake);
        }
        else{
            return dp[currInd][w] = helper(wt, val, w, n, currInd+1);
        }
    }
    int knapSack(int N, int W, int val[], int wt[])
    {
        memset(dp, -1, sizeof(dp));
    //                          currIndex, 
    //                               ^  
    //                               |  
        return helper(wt, val, W, N, 0);
    }
};
