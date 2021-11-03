class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        vector<int> preSum(cardPoints.begin(), cardPoints.end());
        int tmp_k = k, n = cardPoints.size();
        int r = n - k + 1, l = k - 2;
        while(r < n){
            preSum[r] += preSum[r - 1];
            r++;
        }
        
        while(l >= 0){
            preSum[l] += preSum[l + 1];
            l--;    
        }
        
        int r = n - k + 1, l = k - 2, sum = 0;
        while(k){
           sum +=  
        }
    }
};
