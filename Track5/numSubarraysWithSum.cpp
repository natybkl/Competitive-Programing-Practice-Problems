class Solution {
public:
    
    void solve(vector<int>& A, int lf, int rt, int target, int& count){
        int sum = 0;
        if(target < 0)
            return;
        
        while(rt < A.size()){
            sum += A[rt];
            if(sum > target){
                while(sum > target){
                    sum -= A[lf];
                    lf++;
                }
            }
            
            count += rt - lf + 1; 
            /* number of unique subarrays that exists in the given range
             
            for example, [1, 0, 1, 0, 1]  for this array the number of unique arrays for each index will be the following
            
            for i = 0; [1] = {{1}} 
            for i = 1; [1, 0] = {{0}, {1,0}} ---- only two since {1} is already included
            for i = 2; [1, 0, 1] = {{1, 0, 1}, {0, 1}, {1}} ---- {1} is the third element not the first one hence considered unique
            
            at last the pattern gives unique subarrays = size of the largest subarray                   
             
            */
            rt++;
            
        }
    }
    
    int numSubarraysWithSum(vector<int>& A, int S) {
        int lf = 0, rt = 0, count1 = 0, count2 = 0;
        // number of subarrays whose sum equals or less the target S
        solve(A, lf, rt, S, count1);
        
        // number of subarrays whose sum equals or less the target S - 1
        solve(A, lf, rt, S - 1, count2);
        
        //number of subarrays whose sum equals exactly S is the diff b/n count1 & count2
        return count1 - count2;
   }
};
