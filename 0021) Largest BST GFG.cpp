class NodeValue{
    public: 
    
    int minVal, maxVal, size;
    NodeValue(int minVal, int maxVal, int size){
        this->minVal= minVal;
        this->maxVal= maxVal;
        this->size= size;
    }
};

class Solution{
    NodeValue findLarBST(Node* root){
        if(!root){
            // min value = INF --> taaki agar right se null return ho rha hai and we check the condititon at if statement --> to usme
            // right ka min value hamesha root se bda hona chaiye. 
            return NodeValue(INT_MAX, INT_MIN, 0);
        }
        auto left= findLarBST(root->left);
        auto right= findLarBST(root->right);
        
        if(left.maxVal < root->data && root->data < right.minVal){
            // it means that that node is making a bst.
            return NodeValue(min(root->data, left.minVal), max(root->data, right.maxVal), 1+left.size + right.size);
        }
        // not a valid BST
        // returning 
        return NodeValue(INT_MIN, INT_MAX , max(left.size, right.size));
    }
    public:
    int largestBst(Node *root)
    {
    	auto ans= findLarBST(root);
    	return ans.size;
    }
};
