// recursive solution
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n == 1) return true;
        if(n <= 0 || n%4) return false;
        return isPowerOfFour(n/4);
    }
};

//iterative
class Solution {
public:
    bool isPowerOfFour(int n) {
        long val = 1;
        while(val < n)
            val *= 4;
        
        return val == n;
    }
};

//math 
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n == 0) return 0;
        double val = log(n)/log(4);
        return val == ceil(val);
    }
};
