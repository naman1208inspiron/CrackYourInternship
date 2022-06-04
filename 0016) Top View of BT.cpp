class Solution
{
    public:
    vector<int> topView(Node *root)
    {
        queue<pair<Node*, int>>q; // node and vertical
        q.push({root, 0});
        map<int, int> mp; // vertical and node->data
        while(!q.empty()){
            root= q.front().first;
            int vertical= q.front().second;
            q.pop();
          // if that is the first node in that vertical, then only inert in map
            if(mp.find(vertical)== mp.end()){
                mp[vertical]= root->data;
            }
            if(root->left) q.push({root->left, vertical-1});
            if(root->right) q.push({root->right, vertical+1});
        }
        vector<int> ans;
        for(auto it: mp){
            ans.push_back(it.second);
        }
        return ans;
    }

};
