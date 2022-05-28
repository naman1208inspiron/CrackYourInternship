BASIC APPROACH==>
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int n= nums.size();
        vector<int> vis(n, 0), temp;
        vector<vector<int>> ans;
        helper(nums, ans, temp, vis);
        return ans;
    }
    
    void helper(vector<int>&nums, vector<vector<int>>&ans, vector<int>temp, vector<int>&vis){
        if(temp.size()==nums.size()){
            ans.push_back(temp);
            return;
        }
        for(int i=0; i<nums.size(); i++){
            if(vis[i]==0){
                vis[i]=1;
                temp.push_back(nums[i]);
                helper(nums, ans, temp, vis);
                vis[i]=0;
                temp.pop_back();
            }
        }
    }
};

Better Approach==> SC= const.

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        swapPermute(ans, nums, 0);
        return ans;
    }
    void swapPermute(vector<vector<int>>&ans, vector<int>nums, int ind){
        if(ind== nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i= ind; i<nums.size(); i++){
            swap(nums[ind], nums[i]);
            swapPermute(ans, nums, ind+1);
            swap(nums[ind], nums[i]);
        }
    }
 };
