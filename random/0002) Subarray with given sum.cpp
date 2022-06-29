class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        int currSum =0, lo=0, hi;
        for(hi=0; hi<n; hi++){
            // adding the current element.
            currSum += arr[hi];
            
            // if by adding the current element the Currsum increases--> 
            // we will keep decreasing until it becomes smaller.
            while(currSum > s && lo < hi){
                    currSum -= arr[lo++];
            }
            
            // if found return. 
            if(currSum == s){
                return {lo+1, hi+1};
            }

        }
        return {-1};
    }
};
