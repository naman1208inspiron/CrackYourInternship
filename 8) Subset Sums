class Solution
{
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> ans;
        fxn(arr, 0, 0, ans);
        return ans;
    }
    void fxn(vector<int>& arr, int i, int sum, vector<int> &ans){
        if(i==arr.size()){
            ans.push_back(sum);
            return;
        } 
        sum+= arr[i];
        fxn(arr, i+1, sum, ans);
        sum-=arr[i];
        fxn(arr, i+1, sum, ans);
        return ;
    }
};
