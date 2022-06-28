class Solution
{
    public:
    int kthLargest(Node *root, int k)
    {
        stack<Node*> st;
        while(true){
            if(root){
                st.push(root);
                root=root->right;
            }
            else{
                if(st.empty()) break;
                root= st.top(); st.pop();
                k--;
                if(k ==0) return root->data;
                root= root->left;
            }
        }
        return  -1;
    }
};
