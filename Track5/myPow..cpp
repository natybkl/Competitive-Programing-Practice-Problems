class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0) return 1.0;
        
        if(n > 0)
            return n%2 == 0 ? pow(x*x, n/2) : x*pow(x*x, n/2);
        else
            return n%2 == 0 ? pow((x*x), n/2) : (1.0/x)*pow((x*x), n/2);
    }
};

/*  
    x = 3  n = -6
    
    x = 1/3  
  
    myPow(3, 2) = 3*myPow(3, 1)
                = 3*3*myPow(3,0)
                
    x = 8 and n = 6
    
    x = 5 and n = 5        5*pow(25, )
    
    x = 7 and n = 4     ==      x = 49 and n = 2 

*/
