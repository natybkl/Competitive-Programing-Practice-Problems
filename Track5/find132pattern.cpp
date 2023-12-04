class Solution {
public:
    
    bool find132pattern(vector<int>& num) {
        for(int i = 1; i < num.size() - 1; i++){
            for(int j = i - 1; j >= 0; j--) {
                if(num[j] < num[i-1]) 
                    num[i-1] = num[j];
            }
            
            for(int j = i + 1; j < num.size(); j++) {
                if(num[j] >  num[i-1] && num[j] < num[i])
                    return true;
            }
        } 
        
        return  false;
    }
};
