class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int dia= 0;
        findDia(root, dia);
        return dia;
    }
    int findDia(TreeNode* root, int &dia){
        if(root==NULL) return 0;
        int lh= findDia(root->left, dia);
        int rh= findDia(root->right, dia);
        dia= max(dia, lh+rh);
        return 1+max(lh, rh);
    }
};
