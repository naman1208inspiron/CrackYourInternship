class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        int ans=0;
        if(!root) return ans;
        queue<pair<TreeNode*, int>> q;
        q.push({root, 0});
        
        while(!q.empty()){
            int k= q.size();
            int last, first;
            int min= q.front().second;
            for(int i=0; i<k; i++){
                root= q.front().first;
                int curr_id= q.front().second - min;
                q.pop();
                
                if(i==0) first= curr_id;
                if(i==k-1) last= curr_id;
                
                if(root->left) q.push({root->left, (long long) curr_id*2 +1});
                if(root->right) q.push({root->right, (long long) curr_id*2 +2});
            }
            ans= max(ans, last-first+1);
        }
        return ans;
    }
};
