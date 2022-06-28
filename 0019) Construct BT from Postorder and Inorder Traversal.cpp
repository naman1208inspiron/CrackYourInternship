class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int, int> mp;
        for(int i=0; i<inorder.size(); i++){
            mp[inorder[i]]= i;
        }
        TreeNode* root= construct(inorder, 0, inorder.size()-1, postorder, 0, postorder.size()-1, mp);
        return root;
    }
    
    TreeNode* construct(vector<int> in, int instart, int inend, vector<int>& post, int poststart, int postend, unordered_map<int, int>&mp){
        if(instart > inend || poststart> postend) return NULL;
        
        TreeNode* root= new TreeNode(post[postend]);
        int inroot= mp[root->val];
        int left= inroot- instart;
        
        root->left=  construct(in, instart,  inroot-1, post, poststart,       poststart+ left-1, mp);
        root->right= construct(in, inroot+1, inend,    post, poststart+ left, postend-1,         mp);
        
        return root;
    }
};
