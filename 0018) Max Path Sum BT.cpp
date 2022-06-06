class Solution {
public:
    int maxPathSum(TreeNode* root) {
        if(!root) return 0;
        int maxSum=INT_MIN;
        findMaxSum(root, maxSum);
        return maxSum;
    }
    int findMaxSum(TreeNode* root, int &maxSum){
        if(root==NULL) return 0;
        int leftSum= max(0, findMaxSum(root->left, maxSum));
        int rightSum= max(0, findMaxSum(root->right, maxSum));
        
        maxSum= max(maxSum, root->val+ leftSum+ rightSum);
        return root->val+ max(leftSum, rightSum);
    }
};
