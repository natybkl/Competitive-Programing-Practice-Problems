// using iteration

class Solution {
public:
    int fib(int n) {
        
        int sum,a,b;
        
        stack<int> s;
        
        s.push(0);
        
        for(int i=0; i<=n; i++) { 
            
        if(i==1){ sum=1; s.push(sum);  }    
            
           else if(i>=2) {  a=s.top(); s.pop(); b=s.top(); sum=a+b; s.push(a); s.push(sum); } 
            
        }
        
        return s.top();
        
        }
        
    
};



// with recursion

class Solution {
public:
    int fib(int n) {
     

        n<2 ? return 1: return n*fib(n-1);
    
        }
        
        
    
};
