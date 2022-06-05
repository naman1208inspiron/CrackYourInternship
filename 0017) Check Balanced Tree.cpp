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
// ````````````````O(n^2)```````````````
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        int lh= findHeight(root->left);
        int rh= findHeight(root->right);
        return (abs(lh-rh)<=1 && isBalanced(root->left) && isBalanced(root->right));
    }
    
    int findHeight(TreeNode* root){
        if(root==NULL) return 0;
        
        int lh= findHeight(root->left);
        int rh= findHeight(root->right);
        
        return 1+ max(lh, rh);
    }
};
