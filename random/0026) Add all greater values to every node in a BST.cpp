// modify the BST and return its root
void doModification(Node* root, int &sum){
    if(!root) return;
    // if(!root->right){
    //     root->data += sum;
    //     sum= root->data;
    //     return;
    // }
    doModification(root->right, sum);
    root->data += sum;
    sum = root->data;
    doModification(root->left, sum);
}
Node* modify(Node *root)
{
    int sum=0;
    doModification(root, sum);
    return root;
}
