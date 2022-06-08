// ``````````````made the logic and code myself .........proud`````````````
class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int n= preorder.size();
        return createTree(preorder, 0, n-1);
    }
    
    TreeNode* createTree(vector<int>& preorder, int start, int end){
        if(start>end) return NULL;
            
        TreeNode* newNode= new TreeNode(preorder[start]);
        
        int leftEnd= start+1;
        while(leftEnd<= end && preorder[leftEnd]<preorder[start]){
            leftEnd++;
        }
        leftEnd--;
        
        newNode->left= createTree(preorder,start+1, leftEnd);
        newNode->right= createTree(preorder, leftEnd+1, end);
        
        return newNode; // cuz this is the root
    }
};
