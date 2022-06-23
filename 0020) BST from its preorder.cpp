// https://practice.geeksforgeeks.org/problems/preorder-to-postorder4423/1#
class Solution{
public:
    Node* solve(int pre[], int lo, int hi){
        if(lo == hi) return newNode(pre[lo]);
        if(lo > hi) return NULL;
        
        Node* root= newNode(pre[lo]);

        int ptr= lo+1;
        while(ptr <= hi && pre[ptr]< pre[lo]) ptr++;
        
        root->left= solve(pre,lo+1, ptr-1);
        root->right= solve(pre, ptr, hi);
        return root;
    }
    //Function that constructs BST from its preorder traversal.
    Node* post_order(int pre[], int size)
    {
        return solve(pre, 0, size-1);
    }
};
