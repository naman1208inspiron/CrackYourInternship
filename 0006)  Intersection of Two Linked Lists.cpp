class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==headB) return headA;
        
        ListNode *a= headA, *b= headB;
        int c1=0, c2=0;
        while(a){
            c1++;
            a= a->next;
        }
        while(b){
            c2++;
            b= b->next;
        }
        int diff= abs(c1-c2);
        
        if(c1>c2){
            while(diff--){
                headA= headA->next;
            }
        }
        else{
            while(diff--){
                headB= headB->next;
            }
        }
        while(headA && headB){
            if(headA== headB){
                return headA;
            }
            headA= headA->next;
            headB= headB->next;
        }
        return NULL;
    }
};

BETTER APPROACH-->
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a= headA, *b= headB;
        while(a!=b){
            a= a? a->next : headB;
            b= b? b->next : headA;
        }
        return a;
    }
};
