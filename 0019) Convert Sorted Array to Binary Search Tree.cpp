class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode* root= construct(nums, 0, nums.size()-1);
        return root;
    }
    TreeNode* construct(vector<int>&nums, int lo, int hi){
        if(lo>hi) return NULL;
        int middle = (lo+hi)/2;
        TreeNode* root= new TreeNode( nums[middle]);
        
        root->left= construct(nums, lo, middle-1);
        root->right= construct(nums, middle+1, hi);
        
        return root;
    }
};
