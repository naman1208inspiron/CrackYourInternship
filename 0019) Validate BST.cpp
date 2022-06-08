//````````````````O(n^2) recursive``````````````````````
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
//``````````````````````Recursive`````````````````````
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        if(!root) return true;
        return isValid(root, NULL, NULL);
    }
    bool isValid(TreeNode* root, TreeNode* min, TreeNode* max){
        if(!root) return true;
        if(max && root->val >= max->val || min && root->val <= min->val) return false;
        
        return isValid(root->left, min, root) && isValid(root->right, root, max);
    }
};
