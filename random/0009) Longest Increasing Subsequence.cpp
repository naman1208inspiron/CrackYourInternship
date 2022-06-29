class Solution
{   int dp[100000];
    //finds the length of LIS ending at index "ind"
    int find(int arr[], int ind){
        
        if(dp[ind]!= -1) return dp[ind];
        
        int ans= 1;
        for(int j= ind-1; j>=0; j--){
            if(arr[j]< arr[ind]){
                ans= max(ans, 1 + find(arr, j));
            }
        }
        return dp[ind]= ans;
    }
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int arr[])
    {
        dp[n];
        memset(dp, -1, sizeof(dp));
       int ans= INT_MIN;
       for(int i=0; i<n; i++){
           ans= max(ans, find(arr, i));
       }
       return ans;
    }
};
