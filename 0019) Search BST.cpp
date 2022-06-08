class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(!root || root->val== val) return root;
        if(root->val > val) return searchBST(root->left, val);
        return searchBST(root->right, val);
    }
};
//````````iterative```````````
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(!root) return root;
        while(root!= NULL && root->val != val){
            root= root->val> val ? root->left : root->right; 
        }
        return root;
    }
};
