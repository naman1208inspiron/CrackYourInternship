//``````````````Katai iterative --> SC= O(n)````````````````````````````
class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return root;
        
        Node* curr= root;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int k= q.size();
            Node* prev= NULL;
            for(int i=0; i<k; i++){
              // just making the rightmost guy point to NULL and the subsequent left guys to the right ones. 
                root= q.front(); q.pop();
                root->next= prev;
                prev= root;
                if(root->right) q.push(root->right);
                if(root->left) q.push(root->left);
            }
        }
        return curr;
    }
};
//
class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return root;
        Node* dupRoot= root;
        while(root->left){
            Node* temp= root;
            while(temp){
                temp->left->next= temp->right;
                if(temp->next){
                    temp->right->next= temp->next->left;
                }
                temp= temp->next;
            }
            root= root->left;
        }
        return dupRoot;
    }
};
