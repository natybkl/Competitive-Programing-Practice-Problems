class Solution {
public:
    int fib(int n) {
        if(n < 2) return n;
        
        int prev = 0, curr = 1;
        while(--n){
            int sum = prev + curr;
            prev = curr;
            curr = sum;
        }
        
        return curr;
    }
};
