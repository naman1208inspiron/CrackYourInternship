class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        ListNode* s=head, *f= head;
        
        while(f && f->next){
            s= s->next;
            f= f->next->next;
            if(s==f) return true;
        }
        return false;
    }
};
