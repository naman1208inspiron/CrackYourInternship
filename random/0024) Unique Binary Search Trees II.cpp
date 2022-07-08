class Solution {
    //generate fxn creates BST with each number as root in range lo to hi.
    vector<TreeNode*> generate(int lo, int hi){
        //the base conditions.
        vector<TreeNode*> ans;
        if(lo > hi) ans.push_back(NULL);
        if(lo == hi) {
            TreeNode* root= new TreeNode(lo);
            ans.push_back(root);
            return ans;
        }
        //making each one as root.
        for(int i= lo; i<=hi; i++){
            // creating the left subtree --> storing the heads in vector.
            vector<TreeNode*> leftSub= generate(lo, i-1);
            // // creating the right subtree --> storing the heads in vector.
            vector<TreeNode*> rightSub= generate(i+1, hi);
            // now making combination with each head in left with each head in right.
            for(auto left : leftSub){
                for(auto right: rightSub){
                    TreeNode* root= new TreeNode(i);
                    root->left= left;
                    root->right= right;
                    ans.push_back(root);
                }
            }
        }
        return ans;
    }
public:
    vector<TreeNode*> generateTrees(int n){
        return generate(1, n);
    }
};
