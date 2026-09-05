class MinStack {
    //question me diya push pop top and get min will be not called on empty stack
    //never so no need to write empty condition
    stack<int>st;
    stack<int>mn;
public:
    MinStack() {
        
    }
    
    void push(int value) {
        st.push(value);
       if(mn.empty()|| value<mn.top())
        mn.push(value);
       
       else
        mn.push(mn.top());
       
    }
    
    void pop() {
        st.pop();
        mn.pop();
    }
    
    int top() {
       return st.top();
        
    }
    
    int getMin() {
        return mn.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */