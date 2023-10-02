class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int ans = 0, r = 0 , l = 0, tmp_k = k;
        while(r < answerKey.size()){
            k -= (answerKey[r] == 'F');
            while(k < 0)
                k += (answerKey[l++] == 'F');
            
            ans = max(ans, r++ - l + 1);
        }
        
        //cout << ans << endl;
        r = 0, l = 0, k = tmp_k;
        while(r < answerKey.size()){
            k -= (answerKey[r] == 'T');
            while(k < 0)
                k += (answerKey[l++] == 'T');
            
            ans = max(ans, r++ - l + 1);
        }
        
        return ans;
    }
};
