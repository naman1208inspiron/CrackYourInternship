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
