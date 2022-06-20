//````````````````````iterative```````````````````
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1) return list2;
        if(!list2) return list1;
        
        ListNode* dummy= new ListNode(-1);
        
        ListNode *curr= dummy, *h1= list1, *h2= list2;
        while(h1 && h2){
            if(h1->val < h2->val){
                curr->next= h1;
                h1= h1->next;
            }
            else{
                curr->next= h2;
                h2= h2->next;
            }
            curr= curr->next;
        }
        if(h1) curr->next= h1;
        else curr->next= h2;
        
        return dummy->next;
    }
};
//```````````````````recursive```````````````````````````
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1) return list2;
        if(!list2) return list1;
        
        if(list1->val < list2->val){
            list1->next= mergeTwoLists(list1->next, list2);
            return list1;
        }
        // else part
        list2->next= mergeTwoLists(list1, list2->next);
        return list2;
    }
};
