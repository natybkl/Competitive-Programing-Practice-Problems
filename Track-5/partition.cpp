class Solution {
public:
    vector<vector<string>> res;
    vector<string> curr;
    int dp[16][16];
    
    void dfs(string& s, int start){
        if(start >= s.size()){
            res.push_back(curr);
            return;
        }
            
        
        for(int end = start; end < s.size(); end++){
            if(s[end] == s[start] && (end - start <= 2 || dp[start + 1][end - 1])){
                    dp[start][end] = 1;
                    curr.push_back(s.substr(start, end - start + 1));
                    dfs(s, end+1);
                    curr.pop_back();
            }
        }
        
        return;
    }
    
    vector<vector<string>> partition(string s) {
        memset(dp, 0 ,sizeof(dp));
        dfs(s, 0);
        return res;
    }
};
