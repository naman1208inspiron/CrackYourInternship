class Solution {
    unordered_set<int> hash;
public:
    bool findTarget(TreeNode* root, int k) {
        if(!root) return false;
        
        if(hash.count(k-root->val)) return true;
        hash.insert(root->val);
        
        bool left= findTarget(root->left, k);
        bool right= findTarget(root->right, k);
        
        return left||right;
    }
};
