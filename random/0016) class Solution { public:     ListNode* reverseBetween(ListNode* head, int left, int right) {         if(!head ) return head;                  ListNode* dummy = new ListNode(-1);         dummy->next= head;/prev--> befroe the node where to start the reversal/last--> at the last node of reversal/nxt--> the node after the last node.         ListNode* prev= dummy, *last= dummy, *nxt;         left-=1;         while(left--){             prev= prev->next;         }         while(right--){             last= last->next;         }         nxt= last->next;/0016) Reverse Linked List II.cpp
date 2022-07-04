class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head ) return head;
        
        ListNode* dummy = new ListNode(-1);
        dummy->next= head;
        // prev--> befroe the node where to start the reversal
        // last--> at the last node of reversal
        // nxt--> the node after the last node.
        ListNode* prev= dummy, *last= dummy, *nxt;
        left-=1;
        while(left--){
            prev= prev->next;
        }
        while(right--){
            last= last->next;
        }
        nxt= last->next;
        // newEnd--> the new ending of the sequence to reverse.
        ListNode* newEnd= prev->next;
        
        prev->next= reverse(prev->next, last);
        newEnd->next= nxt;
        
        return dummy->next;
    }
    
    ListNode* reverse(ListNode* head, ListNode* end){
        ListNode* curr= head, *prev= NULL, *nxt;
        while(curr && prev!= end){
            nxt= curr->next;
            curr->next= prev;
            prev= curr;
            curr= nxt;
        }
        return prev;
    }
};
