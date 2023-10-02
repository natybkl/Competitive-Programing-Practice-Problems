class Solution {
public:    
    int help(int i, int curr, vector<int>& o, vector<vector<int>>& dp) {
        if(i == o.size()-1)
            return 0;
        
        if(dp[i][curr] != -1)
            return dp[i][curr];
        
        if(o[i+1] != curr)
            return dp[i][curr] = help(i + 1, curr, o, dp);
        
        else {
            int ans = INT_MAX;
            
            if(curr != 1 && o[i] != 1) {
                ans = min(ans, 1 + help(i + 1, 1, o, dp));
            }
            
            if(curr != 2 && o[i] != 2) {
                ans = min(ans, 1 + help(i + 1, 2, o, dp));
            }
            
            if(curr!=3 && o[i]!=3) {
                ans = min(ans, 1 + help(i + 1, 3, o, dp));
            }
            
            return dp[i][curr] = ans;
        }
        
        return 0;
    }
    
    int minSideJumps(vector<int>& obstacles) {
        vector<vector<int>> dp(obstacles.size(),vector<int>(4,-1));
        return help(0, 2, obstacles, dp);
    }
	

};

