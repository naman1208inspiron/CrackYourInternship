// recursive solution --> very very naive.
class Solution {
public:
    void flatten(TreeNode* root) {
        if(!root) return;
        // flattening the left subtree
        flatten(root->left);
        // flattening the right subtree
        flatten(root->right);
        if(root->left){
            TreeNode* temp= root->right;
            //moving the left part to the right
            root->right= root->left;
            //making the left part as null
            root->left= NULL;
            // now moving to the last node in root's right
            while(root->right){
                root= root->right;
            }
            //moving temp to the right of the last node in right part.
            root->right= temp;
        }
    }
};
// `````````````````iterative``````````````````
class Solution {
public:
    void flatten(TreeNode* root) {
        if(!root) return;
        while(root){
            if(root->left){
                TreeNode* pre= root->left;
                while(pre->right){
                    pre= pre->right;
                }
                pre->right= root->right;
                root->right= root->left;
                root->left= NULL;
            }
            root= root->right;
        }
    }
};
// what we are doing is that moving the right subtree to the right of the rightmost node in the left subtree and then moving the left subtree to the right
//and making the left as NULL. and we are doing this for all the nodes.
