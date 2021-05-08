class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) 
    {
        long top, i=0, res;
        priority_queue<long> minheap;
        minheap.push(-1);
        
        while(n--) {
            res = (-1*minheap.top());
            minheap.pop();
            
            for(int& prime:primes)
                minheap.push(-1*res*prime);
            
            while(!minheap.empty() && res >= (-1*minheap.top()))
                minheap.pop();
        }
        
        return res;
    }
};
