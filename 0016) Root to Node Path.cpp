//  i built the logic and wrote the whole code myself
bool findPath(TreeNode* root, vector<int> &ans, int x){
    ans.push_back(root->val);
    if(root->val== x) return true;
    if(root->left){
        if(findPath(root->left, ans, x)) return true;
        ans.pop_back();
    }
    if(root->right){
        if(findPath(root->right, ans, x)) return true;
        ans.pop_back();
    }
    return false;
}
//``````````````initial function call made to this one``````````````````````````
vector<int> Solution::solve(TreeNode* root, int x) {
    vector<int> ans;
    findPath(root, ans, x);
    return ans;
}
