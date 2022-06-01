TC: O(N) || SC= O(N)
class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*, Node*> mp;
        Node* temp= head;
        while(temp){
            Node* copy= new Node(temp->val);
            mp[temp]= copy;
            temp= temp->next;
        }
        // mp[NULL]= NULL;
        temp= head;
        while(temp){
            Node* copy= mp[temp];
            Node* originalNext= temp->next;
            Node* originalRandom= temp->random;
            
            Node* copyNext= mp[originalNext];// deep copy ka next 
            Node* copyRandom= mp[originalRandom];// deep copy ka random
            
            copy->next= copyNext;
            copy->random= copyRandom;
            
            temp= temp->next;
        }
        return mp[head];
    }
};
Approach 2==>
TC: O(N) || SC= O(1)
class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* temp= head;
        // first iteration=> make copy of each node and link them
        while(temp){
            Node* newNode= new Node(temp->val);
            Node* nxt= temp->next;
            temp->next= newNode;
            newNode->next= nxt;
            temp= nxt;
        }
        temp=head;
        // second iteration=> assign radnom pointers to the copy nodes.
        while(temp){
            temp->next->random= temp->random ? temp->random->next: temp->random;
            temp= temp->next->next;
        }
        temp= head;
        Node* front= temp? temp->next->next : NULL;
        Node* newHead= head? head->next : NULL;
        // third iteration=> restoring the original list and the copy list
        while(temp){
            temp->next->next= front ? front->next : front;
            temp->next= front;
            temp= front;
            front= front? front->next->next: NULL;
        }
        return newHead;
    }
};
