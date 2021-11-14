class Solution {
public:
    int candy(vector<int>& ratings){ 
        int n = ratings.size(), sum = 0;
        vector<int> res(n, 1);
        for(int i = 1; i < n; i++){
            if(ratings[i - 1] < ratings[i]){
                if(res[i] <= res[i - 1]) res[i] = max(res[i - 1] + 1, res[i]);
            }
                
        }
       
        for(int i = n - 2; i >= 0; i--){
            if(ratings[i + 1] < ratings[i]){
                if(res[i] <= res[i + 1]) res[i] = max(res[i + 1] + 1, res[i]);
            }
        }
        
        
        return accumulate(res.begin(), res.end(), sum);
    }
};
