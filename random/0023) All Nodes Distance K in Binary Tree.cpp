/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    void findParent(TreeNode* root, unordered_map<TreeNode*, TreeNode*>&parent){
        queue<TreeNode*> q;
        q.push(root);
        parent[root]= NULL;
        while(!q.empty()){
            root= q.front(); q.pop();
            
            if(root->left){
                parent[root->left]= root;
                q.push(root->left);
            } 
            if(root->right){
                parent[root->right]= root;
                q.push(root->right);
            }
        }
    }
    
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        //finding the parent to move in backward direction
        unordered_map<TreeNode*, TreeNode*> parent;
        findParent(root, parent);
        
        unordered_set<TreeNode*> vis;
        // now do a bfs type traversal and move to the adjacent nodes one by one. 
        // and increase the distance at each step. 
        
        queue<TreeNode*> q;
        q.push(target);
        vis.insert(target);
        
        int dis=0;
        while(!q.empty() && dis!= k){
            int size= q.size();
           
            while(size--){
                TreeNode* node= q.front(); q.pop();
                //moving right
                if(node->right && vis.count(node->right)==0 ){
                    vis.insert(node->right);
                    q.push(node->right);
                }
                //moving left
                if(node->left && vis.count(node->left)==0 ){
                    vis.insert(node->left);
                    q.push(node->left);
                }
                //moving up i.e. to parent. 
                TreeNode* par= parent[node];
                if(par && vis.count(par)==0 ){
                    vis.insert(par);
                    q.push(par);
                }
            }
            dis++;
        }
        
        vector<int> ans;
        while(!q.empty()){
            ans.push_back(q.front()->val);
            q.pop();
        }
        return ans;
    }
};
