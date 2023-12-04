// bottom-up dp
class Solution {
public:
    int climbStairs(int n) {
        vector<int> memo(n+1);
        memo[0]=1;
        memo[1]=1;
        for(int i=2; i < n+1; i++){
            memo[i]=memo[i-1]+memo[i-2];
        }
        
        return memo[n];
    }
};


// top-down dp
class Solution {
public:
    int solve(int n,vector<int> &memo){
        if(n <= 1)
            return 1;
        
        if(memo[n])
            return memo[n];
        
        return memo[n] = solve(n-1,memo) + solve(n-2,memo);
    }

    int climbStairs(int n){
        vector<int> memo(n+1);
        return solve(n,memo);
    }
};
