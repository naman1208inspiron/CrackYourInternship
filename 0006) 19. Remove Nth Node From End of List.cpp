
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* newHead= new ListNode(-1);
        newHead->next= head;
        
        ListNode* slow= newHead, *fast= newHead;
        while(n--){
            fast= fast->next;
        }
        while(fast->next){
            fast= fast->next;
            slow = slow->next;
        }
        ListNode* todelete= slow->next;
        slow->next= slow->next->next;
        delete(todelete);
        
        return newHead->next;
    }
};
