// recursive solution
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n == 1) return true;
        if(n <= 0 || n%3) return false;
        return isPowerOfFour(n/3);
    }
};

//iterative
class Solution {
public:
    bool isPowerOfThree(int n) {
        long val = 1;
        while(val < n)
            val *= 3;
        
        return val == n;
    }
};

//math 
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n == 0) return 0;
        double val = log(n)/log(3);
        return val == ceil(val);
    }
};
