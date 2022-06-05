class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root) return ans;
        
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int k=q.size();
            vector<int> temp;
            
            while(k--){
                root= q.front(); q.pop();
                temp.push_back(root->val);
                
                if(root->left) q.push(root->left);
                if(root->right) q.push(root->right);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
