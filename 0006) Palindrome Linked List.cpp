class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow= head, *fast=head, *curr=head, *prev= NULL, *nex;
        while(fast && fast->next){
            slow= slow->next;
            fast= fast->next->next;
            
            nex= curr->next;
            curr->next= prev;
            prev= curr;
            curr= nex;
        }
        ListNode* node1= prev, *node2= fast ? curr->next : curr;
        while(node1){
            if(node1->val != node2->val) return false;
            node1= node1->next;
            node2= node2->next;
        }
        return true;
        
    }
};
