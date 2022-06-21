Node* mergeTwo(Node* bottomHead, Node* rightHead){
    if(!bottomHead) return rightHead;
    if(!rightHead) return bottomHead;
    
    Node* res;
    if(bottomHead->data < rightHead->data){
        res= bottomHead;
        res->bottom= mergeTwo(bottomHead->bottom, rightHead);
    }
    else{
        res= rightHead;
        res->bottom= mergeTwo(bottomHead, rightHead->bottom);
    }
    res->next= NULL;
    return res;
    
}
Node *flatten(Node *root)
{
    if(!root || !root->next) return root;
    
    Node* rightHead= root->next;
    Node* bottomHead= root;
    bottomHead->next= NULL;
    
    rightHead= flatten(rightHead);
    Node* newHead= mergeTwo(bottomHead, rightHead);
    return newHead;
    
}
//````````````````````````merge fxn as iterative````````````````````````````````
Node* mergeTwo(Node* bottomHead, Node* rightHead){
    if(!bottomHead) return rightHead;
    if(!rightHead) return bottomHead;
    
    Node* dummy= new Node(-1);
    Node* tmp= dummy;
    while(bottomHead && rightHead){
        if(bottomHead->data < rightHead->data){
            tmp->bottom= bottomHead;
            bottomHead= bottomHead->bottom;
        }
        else{
            tmp->bottom= rightHead;
            rightHead= rightHead->bottom;
        }
        tmp->next= NULL;
        tmp= tmp->bottom;
    }
    if(bottomHead){
        tmp->bottom= bottomHead;
    }
    else{
        tmp->bottom= rightHead;
    }
    return dummy->bottom;
}
Node *flatten(Node *root)
{
    if(!root || !root->next) return root;
    
    Node* rightHead= root->next;
    Node* bottomHead= root;
    bottomHead->next= NULL;
    
    Node *newrightHead= flatten(rightHead);
    Node* newHead= mergeTwo(bottomHead, newrightHead);
    return newHead;
    
}
