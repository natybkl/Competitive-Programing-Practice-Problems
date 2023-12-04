class Solution {
public:
    int longestMountain(vector<int> A) {
        int N = A.size(), res = 0, i = 0;
        while(i < N) {
            int j = i;
            if(j + 1 < N && A[j + 1] > A[j]){
                while(j + 1 < N && A[j + 1] > A[j]) j++;
            
                if(j + 1 < N && A[j + 1] < A[j]){
                     while(j + 1 < N && A[j + 1] < A[j]) j++;
                     res = max(res, j - i + 1);
                }
            }
            
            i = max(i + 1, j);
        }
        
        
        return res;
    }
};
