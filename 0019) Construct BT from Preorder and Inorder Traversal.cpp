class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int, int>mp;
        for(int i=0; i<inorder.size(); i++){
            mp[inorder[i]]= i;
        }
        TreeNode* root = construct(preorder, 0, preorder.size()-1, inorder, 0, inorder.size()-1, mp);
        return root;
    }
    
    TreeNode* construct(vector<int>& pre, int preStart, int preEnd, vector<int> &in, int inStart, int inEnd, unordered_map<int, int> &mp){
        if(inStart > inEnd || preStart > preEnd) return NULL;

        TreeNode* root= new TreeNode(pre[preStart]);
        int inRoot= mp[root->val]; 
        int leftNum= inRoot- inStart; // number of number in the left of the root in the inorder vector. 
        
        root-> left=  construct(pre, preStart+1,         preStart+leftNum, in, inStart,   inRoot-1, mp);
        root-> right= construct(pre, preStart+leftNum+1, preEnd,           in, inRoot+1,  inEnd,    mp);
        
        return root;
    }
};
