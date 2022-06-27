class Solution{   
public:
    bool helper(vector<int>&arr, int sum, int currSum, int ind, vector<vector<int>>&dp){
        if(ind == arr.size()){
            if(currSum == sum) return true;
            return false;
        }
        if(dp[ind][currSum] != -1) return dp[ind][currSum];
        
        if(currSum + arr[ind] <= sum){
            bool take= helper(arr, sum, currSum+arr[ind], ind+1, dp);
            bool notTake= helper(arr, sum, currSum, ind+1, dp); 
            return  dp[ind][currSum] = take or notTake;
        }
        
        return dp[ind][currSum] =  helper(arr, sum, currSum, ind+1, dp);
    }
    bool isSubsetSum(vector<int>arr, int sum){
        vector<vector<int>> dp(arr.size(), vector<int> (sum, -1));
        return helper(arr, sum, 0, 0, dp); //sum , currInd
    }
};
