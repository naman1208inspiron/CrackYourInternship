void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
    pre= NULL, suc= NULL;
    Node* duproot= root;
    while(root){
        if(root->key > key){
            suc= root;
            root= root->left;
        }
        else{
            root= root->right;
        }
    }
    //finding pedecessor
    root= duproot;
    while(root){
        if(root->key < key){
           pre= root;
           root= root->right;
        }
        else{
            root= root->left;
        }
    }
}
