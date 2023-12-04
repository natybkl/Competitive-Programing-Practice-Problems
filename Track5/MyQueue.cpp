class MyQueue {
public:
    stack<int> in,out;
    MyQueue() {
        in = {};
        out = {};
    }
    
    void push(int x) {
        in.push(x);
    }
    
    int pop() {
        int val = peek();
        out.pop();
        
        return val;
    }
    
    int peek() {
        stack<int> tmp;
        while(!out.empty()){
            tmp.push(out.top());
            out.pop();
        }
        
        while(!in.empty()){
            out.push(in.top());
            in.pop();
        }
        
        while(!tmp.empty()){
            out.push(tmp.top());
            tmp.pop();
        }
        
        return out.top();
    }
    
    bool empty() {
        return in.empty() and out.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
   
   
 
 */
