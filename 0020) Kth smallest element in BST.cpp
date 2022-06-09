class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode*> st;
        while(true){
            if(root){
                st.push(root);
                root= root->left;
            }
            else{
                if(st.empty()) break;
                // now we are getting the element for inOrder.
                root= st.top(); st.pop();
                // here we are checking if that element is at the kth position or not.
                if(--k == 0) return root->val;
                
                root= root->right;
            }
        }
        return -1;
    }
};
// `````````````````same recursive code`````````````````````
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        int ans;
        inorder(root, ans, k);
        return ans;
    }
    void inorder(TreeNode* root, int &ans, int &k){
        if(!root) return;
        
        inorder(root->left, ans, k);
        if(--k == 0){
            ans= root->val; 
            return;
        }
        inorder(root->right, ans, k);
    }
};
