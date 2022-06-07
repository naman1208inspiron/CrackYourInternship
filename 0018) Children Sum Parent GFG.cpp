class Solution{
    public:
    int isSumProperty(Node *root){
        // base case --> null node or a single node 
        if(!root || !root->left && !root->right) return 1;
        
        int ls= root->left ? root->left->data : 0;
        int rs= root->right ? root->right->data : 0;
        
        if(root->data!= ls+rs) return 0;
        
        return isSumProperty(root->left) && isSumProperty(root->right);
    }
};
