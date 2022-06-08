//```````````````cleaner code```````````````````````````
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) { 
        
        if(p->val> root->val && q->val > root->val){
            return lowestCommonAncestor(root->right, p, q);
        }
        if(p->val< root->val && q->val < root->val){
            return lowestCommonAncestor(root->left, p, q);
        }
        return root;
    }
};
// ``````````the code is wrote```````````````
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(q->val< p->val) return lowestCommonAncestor(root, q, p);
        
        if(!root) return NULL;
        if(p->val<= root->val && q->val >= root->val) return root;
        
        if(p->val> root->val && q->val > root->val){
            return lowestCommonAncestor(root->right, p, q);
        }
        return lowestCommonAncestor(root->left, p, q);
    }
};
