class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        if(findBalance(root)==-1) return false;
        return true;
    }
    int findBalance(TreeNode* root){
        if(root==NULL) return 0;
        
        int lh= findBalance(root->left);
        if(lh==-1) return -1;
        int rh= findBalance(root->right);
        if(rh==-1) return -1;
        
        if(abs(lh-rh)>1) return -1;
        
        return 1+ max(lh, rh);
    }
};
