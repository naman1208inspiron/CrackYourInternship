class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return check(root->left, root->right);
        
    }
    bool check(TreeNode* l, TreeNode* r){
        if(!l && !r) return true;
        if(!l || !r || l->val!= r->val) return false;
        return check(l->left, r->right) && check(l->right, r->left);
    }
};
// ``````````````````little bit change```````````````````````
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return check(root->left, root->right);
        
    }
    bool check(TreeNode* l, TreeNode* r){
      // changes made here. 
        if(!l || !r) return l==r;
        if(l->val!= r->val) return false;
        return check(l->left, r->right) && check(l->right, r->left);
    }
};
// `````````````````can use queue and stack as well in iterative method`````````````````````````````````
