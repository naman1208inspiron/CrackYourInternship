`````````````best approach ==> using Linked List`````````````````````````
class MinStack {
    class Node{
    public:
        int val, mini;
        Node* next;
        Node(int val, int mini, Node* next){
            this->val= val;
            this->mini= mini;
            this->next= next;
        }
    };
    Node* head;
public:
    
    MinStack() {
        head= NULL;
    }
    
    void push(int val) {
        if(head==NULL){
            head= new Node(val, val, NULL);
        }
        else{
            head= new Node(val, min(val, head->mini), head);
        }
    }
    
    void pop() {
        head= head->next;
    }
    
    int top() {
        return head->val;
    }
    
    int getMin() {
        return head->mini;
    }
};

````````````````using stacks```````````````````````````````
class MinStack {
    stack<int> st, mini;
    // using this method of min_till_now give some error. 
    // int min_till_now;
public:
    MinStack() {
        // min_till_now=INT_MAX;
    }
    
    void push(int val) {
        st.push(val);
        // if(mini.empty()) min_till_now= INT_MAX;
        // if(val<= min_till_now){
        //     min_till_now= val;
        //     mini.push(min_till_now);
        // }
        if(mini.empty()|| val<=getMin()) mini.push(val);
    }
    
    void pop() {
        
        if(st.top()== mini.top()){
            mini.pop();
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mini.top();
    }
};
