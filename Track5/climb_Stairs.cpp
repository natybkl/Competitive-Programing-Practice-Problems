class Solution {
public:
    int climbStairs(int n) {
        if(n < 2)
            return 1;
        
        int p = 1, pp = 1; 
        int ans = 0;
        
        while(n-- > 1){
            ans = pp + p;
            pp = p;
            p = ans;
        }
        
        return ans;
        
    }
};
