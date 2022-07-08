class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        return merge(root1, root2);
    }
    TreeNode* merge(TreeNode* root1, TreeNode* root2){
        
        if(!root1 && !root2) return NULL;
        if(!root1) return root2;
        if(!root2) return root1;
        
        int sum= 0;
        if(root1) sum+= root1->val;
        if(root2) sum+= root2->val;
            
        TreeNode* newRoot= new TreeNode(sum);
        newRoot->left= merge(root1->left, root2->left);
        newRoot->right= merge(root1->right, root2->right);
        
        return newRoot;
    }
};


//`````````````````````````````````````````````````````````
class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        return merge(root1, root2);
    }
    TreeNode* merge(TreeNode* root1, TreeNode* root2){
        
        // if(!root1 && !root2) return NULL;
        if(!root1) return root2;
        if(!root2) return root1;
        
        root1->val+= root2->val;
            
        root1->left= merge(root1->left, root2->left);
        root1->right= merge(root1->right, root2->right);
        
        return root1;
    }
};
