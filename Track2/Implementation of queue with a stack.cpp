class MyQueue {
public:
    
    stack<int> s1;
    MyQueue() {
        
    }
    
   
    void push(int x) {
        stack<int> s2={};
        
      
        while(!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        auto s = s1.top();
        s1.pop();
        return s;
    }
    
    /** Get the front element. */
    int peek() {
        return s1.top();
    }
    
    /** RetuRetuReRetuRetuReturnsrnsReturnsrnsturnsrnsReturnsrns whether the queue is empty. */
    bool empty() {
        return s1.empty();
    }
};
