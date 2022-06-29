// maximum sum such that no two elements are consecutive. 
class Solution
{   
    int dp[10000][2];
    // finds the max sum if the element at index --> 'ind', is taken or not taken
    int findmax(int arr[], int ind, bool state, int n){
        if(ind == n-1) return state ? arr[ind] : 0;
        if(ind >= n) return 0;
      
        if(state){
            // if we are taking that index --> then we can or cannot take the i+2 th element.
            if(dp[ind][1]!= -1) return dp[ind][1];
            
            int left= findmax(arr, ind+2, true, n);
            int right= findmax(arr, ind+2, false, n);
            
            return dp[ind][1] = max(left, right) + arr[ind];
        }
        // else part 
        if(dp[ind][0]!= -1) return dp[ind][0];
        
        int leftt= findmax(arr, ind+1, true, n);
        int rightt= findmax(arr, ind+1, false, n);
        
        return dp[ind][0]= max(leftt, rightt);
    }
    public:
    int FindMaxSum(int arr[], int n)
    {
        memset(dp, -1, sizeof(dp));
        // taking 0 and not taking 0
        return max(findmax(arr, 0, true, n), findmax(arr, 0, false, n));
    }
};
//```````````````````small cute code```````````````
class Solution
{   // finds the max sum if the element is taken.
    int dp[10001];
    
    int findmax(int arr[], int ind){
        if(ind <= -1) return 0;
        if(dp[ind]!= -1) return dp[ind];
        
        int option1= arr[ind] + findmax(arr, ind-2);
        int option2= findmax(arr, ind-1);
        return dp[ind] = max(option1, option2);
    }
    public:
    int FindMaxSum(int arr[], int n)
    {   
        dp[n];
        memset(dp, -1, sizeof(dp));
        return findmax(arr, n-1);
    }
};
