class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int> inorder;
        while(true){
            if(root){
                st.push(root);
                root= root->left;
            }
            else{
                if(st.empty()) break;
                root= st.top(); st.pop();
                inorder.push_back(root->val);
                root= root->right;
            }
        }
        return inorder;
    }
};
