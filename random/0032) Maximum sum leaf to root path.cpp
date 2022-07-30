class Solution{
    public:
    int find(Node* root){
        if(!root) return 0;
        int l= find(root->left), r= find(root->right);
        if(l==0) return root->data + r;
        if(r==0) return root->data + l;
        return root->data + max(l,r);
    }
    int maxPathSum(Node* root)
    {
        return find(root);
    }
};
