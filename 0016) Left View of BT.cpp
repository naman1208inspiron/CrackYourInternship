//`````````````````````Iterative Apporach``````````````````````````````
vector<int> leftView(Node *root)
{
   queue<Node*> q;
   vector<int> lv;
   if(!root) return lv;
   q.push(root);
   while(!q.empty()){
       int k= q.size();
       for(int i=0; i<k; i++){
           root= q.front(); q.pop();
         // pushing in lv vector only if it is the first element in that level.
           if(i==0) lv.push_back(root->data);
           if(root->left) q.push(root->left);
           if(root->right) q.push(root->right);
       }
   }
   return lv;
}
//``````````````````Recursive Apporach```````````````````````````
void getLeftView(Node* root, int level, vector<int> &lv){
    if(root== NULL) return;
    if(lv.size()== level) lv.push_back(root->data);
    
    getLeftView(root->left, level+1, lv);
    getLeftView(root->right, level+1, lv);
}

vector<int> leftView(Node *root)
{
   vector<int> lv;
   getLeftView(root, 0, lv);
   return lv;
}
