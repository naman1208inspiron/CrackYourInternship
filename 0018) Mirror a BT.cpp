// ```````````````katai recursive``````````````````
class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* node) {
        // code here
        if(node==NULL) return;
      //swapping root->left and root->right
        Node* temp= node->right;
        node->right= node->left;
        node->left= temp;
        mirror(node->left);
        mirror(node->right);
    }
};
