class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        int d= findDepth(root);
        return d;
    }
    int findDepth(TreeNode* root){
        if(root== NULL) return 0;
        int lh= findDepth(root->left);
        int rh= findDepth(root->right);
        return 1+ max(lh, rh);
    }
};
// ``````````````````````OR`````````````````````
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root== NULL) return 0;
        int lh= maxDepth(root->left);
        int rh= maxDepth(root->right);
        return 1+ max(lh, rh);
    }
};
