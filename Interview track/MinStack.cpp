class MinStack {
    stack<int> main_stack,min_stack;
public:
    MinStack() {
        main_stack = {};
        min_stack = {};
    }
    
    void push(int val) {
        main_stack.push(val);
        if(min_stack.empty() or min_stack.top() >= val) 
            min_stack.push(val);
    }
    
    void pop() {
        if(main_stack.empty()) return;
        
        if(main_stack.top() == min_stack.top()) min_stack.pop();
        main_stack.pop();
    }
    
    int top() {
        return main_stack.top();
    }
    
    int getMin() {
        return min_stack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
