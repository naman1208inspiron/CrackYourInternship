// ````````````````complete code and logic built without seeing and revising ...so pround......can be presented in a good way ````````````````````````
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root) return root;
        return findLCA(root, p, q);
    }
    TreeNode* findLCA(TreeNode* root, TreeNode* p, TreeNode* q){
        if(root==NULL || root==p ||root==q) return root;
    
        TreeNode* leftLCA= findLCA(root->left, p, q); 
        TreeNode* rightLCA= findLCA(root->right, p, q);
        
        if(!leftLCA && !rightLCA) return NULL;
        else if(leftLCA && rightLCA) return root;
        else if(leftLCA) return leftLCA;
        else if(rightLCA) return rightLCA;
        
        //````````GOOD PRESENTATION````````````
        // if(!leftLCA && !rightLCA) return NULL;
        // else if(leftLCA && rightLCA) return root;
        // return leftLCA ? leftLCA : rightLCA;
        
        // if(leftLCA==NULL) return right;
        // else if(rightLCA== NULL) return left;
        // return root;
        
        // return !leftLCA ? rightLCA : !rightLCA ? leftLCA : root;
        return NULL;
    }
};
