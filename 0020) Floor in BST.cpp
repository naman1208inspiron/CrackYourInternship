int floorInBST(TreeNode<int> * root, int X)
{
    int f= 0;
    while(root){
        if(root->val == X) return root->val;
        if(root->val < X){
            f= root->val;
            root= root->right;
        }
        else{
            root= root->left;
        }
    }
     return f;
}
