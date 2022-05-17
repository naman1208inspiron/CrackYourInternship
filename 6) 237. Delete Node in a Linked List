class Solution {
public:
    void deleteNode(ListNode* node) {
        // METHOD 1--> 
        // ListNode* prev;
        // while(node->next){
        //     node->val= node->next->val;
        //     prev= node;
        //     node= node->next;
        // }
        // prev->next= NULL;
        // delete(node);
        
        // METHOD 2--> 
        // node->val= node->next->val;
        // node->next= node->next->next;
        
        // METHOD 3--> 
        ListNode* nxtNode= node->next;
        *node= *nxtNode; // dereferencing the nodes --> all the content of nxtNode is copied into node. 
        delete(nxtNode);
    }
};
