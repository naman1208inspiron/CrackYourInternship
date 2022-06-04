class Solution {
  public:
    vector <int> bottomView(Node *root) {
        queue<pair<Node*, int>> q; // node and the vertical order
        q.push({root, 0});
        map<int, int> mp; // vertical order and the node->val
      // we are not taking level cuz for a particular vertical order we need only the last guy and it would get upadated in map everytime.
        while(!q.empty()){
            root= q.front().first;
            int vertical= q.front().second;
            q.pop();
            mp[vertical]= root->data;
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
