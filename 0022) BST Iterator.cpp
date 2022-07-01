class BSTIterator {
    void pushAllLeft(TreeNode* node){
        while(node){
            st.push(node);
            node= node->left;
        }
    }
public:
    stack<TreeNode*> st;
    BSTIterator(TreeNode* root) {
        pushAllLeft(root);
    }
    
    int next() {
        TreeNode* tmp= st.top(); st.pop();
        if(tmp->right){
            pushAllLeft(tmp->right);
        }
        return tmp->val;
    }
    
    bool hasNext() {
        return !st.empty();
    }
};
