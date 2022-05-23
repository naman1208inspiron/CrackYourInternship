class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        comb(0, ds, ans, nums, target);
        return ans;
    }
    void comb(int index, vector<int> ds, vector<vector<int>> &ans, vector<int> nums, int target){
        if(index==nums.size()){
            if(target==0) ans.push_back(ds);
            return;
        }
        if(nums[index]<=target){
            ds.push_back(nums[index]);
            comb(index, ds, ans, nums, target-nums[index]);
            ds.pop_back();
        }
        
        comb(index+1, ds, ans, nums, target);
    }
};
