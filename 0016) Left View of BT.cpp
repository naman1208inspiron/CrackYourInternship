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
