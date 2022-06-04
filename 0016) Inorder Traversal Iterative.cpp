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
//````````````````````MORRIS TRAVERSAL``````````````````````````
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        // using morris traversal
        vector<int> inorder;
        TreeNode* curr= root;
        while(curr){
            if(curr->left== NULL){
                inorder.push_back(curr->val);
                curr= curr->right;
            }
            else{
                TreeNode* prev= curr->left;
                //making rightmost node of left subtree point to curr node before moving left
                while(prev->right && prev->right!= curr){
                    prev= prev->right;
                }
                if(prev->right== NULL){
                    prev->right= curr;
                    curr= curr->left;
                }
                else{
                    prev->right= NULL;
                    inorder.push_back(curr->val);
                    curr= curr->right;
                }
            }
        }
        return inorder;
    }
};
