// ```````````````````````recursive approach ```````````````````````````````````
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head || !head->next) return head;
        ListNode *prev= NULL, *curr= head, *nxt, *tmp= head;
      // finding the no. of nodes left
        int nodesLeft=0;
        while(tmp){
            tmp= tmp->next;
            nodesLeft++;
            if(nodesLeft > k) break;
        }
        if(nodesLeft < k) return head;
      
        int c=0; 
        while(curr && c<k){
            nxt= curr->next;
            curr->next= prev;
            prev= curr; 
            curr= nxt;
            c++;
        }
        if(curr){
            head->next= reverseKGroup(curr, k);
        }
        return prev;
    }
};
