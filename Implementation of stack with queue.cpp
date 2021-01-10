class MyStack {
public:
    /** Initialize your data structure here. */
    queue<int> q1;
    queue<int> q2;
    
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
     void push(int x) {
    	
       while(d1.empty()!=true) {
       	
         d2.push(d1.front());         

         d1.pop();

       }  

             d1.push(x);   

    
      while(d2.empty()!=true){

          d1.push(d2.front());

          d2.pop(); 
  
   }    
   }    

    /** ReRemtopovesmoves the element on top of the stack and returns that element. */

    int pop() {
       int q=d1.front(); 

       d1.pop();
       
       return q;  

    }

    

    /** Get the top element. */

    int top() {
    	
        return d1.front();
    }
   /** Returns whether the stack is empty. */



    bool empty() {
    	
       return d1.empty();
   }
};
