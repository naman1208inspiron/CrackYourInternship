class Solution
{
    public:
    Node *sortedInsert(Node* head, int data)
    {
       Node* prev= NULL, *curr= head;
       while(curr->data <= data){
           prev= curr; 
           if(curr->next ==head) break;
           curr= curr->next;
       }
       Node* newNode= new Node(data);
       if(prev==NULL){
           newNode->next= head;
           while(curr->next != head) curr= curr->next;
           curr->next= newNode;
           return newNode; 
       }
       else if(prev->next== head){
           prev->next= newNode;
           newNode->next= head;
       }
       else{
           Node* nxt= prev->next;
           prev->next= newNode;
           newNode->next= nxt;
       }
       return head;
    }
};
