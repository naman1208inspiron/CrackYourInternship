class Solution {
public:
    bool isValidBST(TreeNode* root) {
        if(!root) return true;
        // check at left and right subtree that all the values are smaller and greater than root->val, respectively. 
        if(!chkLeft(root->left, root->val) || !chkRight(root->right, root->val)){
            return false;
        }
        // if all the values are corect for that node , now repeat the process for root->left and root->right
        return isValidBST(root->left) && isValidBST(root->right);
        
    }
    bool chkLeft(TreeNode* root, int val){
        if(!root) return true;
        
        if(root->val >= val) return false;
        return chkLeft(root->left, val) && chkLeft(root->right, val);
    }
    bool chkRight(TreeNode* root, int val){
        if(!root) return true;
        
        if(root->val <= val) return false;
        return chkRight(root->left, val) && chkRight(root->right, val);
    }
};
