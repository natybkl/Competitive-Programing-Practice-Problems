class Solution {
public:
    int chain_length(string word, int index, unordered_map<string, int> &w,  vector<int> &dp) {
        if(dp[index]) 
            return dp[index];
        int len = 1; 
        
        for(int i=0; i<word.size(); i++) {
            string temp = word.substr(0,i) + word.substr(i+1); 
            if(w.find(temp)!=w.end()) 
                len = max(len, 1 + chain_length(temp, w[temp], w, dp)); 
        }
        
        return dp[index] = len; 
    }
    
    int longestStrChain(vector<string>& words) {
        unordered_map<string, int> w; 
        vector<int> dp (words.size(), 0); 
        int res = 0;
        
        for(int i=0; i<words.size(); i++)
            w[words[i]] = i; 
        
        for(int i = 0; i<words.size(); i++)
            res = max(res, chain_length(words[i], i, w, dp)); 
        
        return res; 
    }
};
