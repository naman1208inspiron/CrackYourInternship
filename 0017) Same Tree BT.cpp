class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q) return true;
        if( !p || !q || p->val != q->val) return false;
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};
//```````````iterative``````````````
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        queue<TreeNode*>pipe;
        pipe.push(p);
        pipe.push(q);
        while(!pipe.empty()){
            p= pipe.front(); pipe.pop();
            q= pipe.front(); pipe.pop();
            
            if(!p && !q) continue;
            if(!p || !q) return false;
            if(p->val != q->val) return false;
            pipe.push(p->left);
            pipe.push(q->left);
            pipe.push(p->right);
            pipe.push(q->right);
        }
        return true;
    }
};
