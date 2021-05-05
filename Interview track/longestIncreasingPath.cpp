#define vovf vector<vector<int> >
class Solution {
public:
int dfs(vovf& matrix, vovf& dp, int r, int c, int len){
	if(dp[r][c] != -1)
		return dp[r][c] + 1;

	int tmp = len;
	// down
	if(r+1 < matrix.size() && matrix[r+1][c] > matrix[r][c])
		len = max(len, dfs(matrix, dp, r+1, c, tmp));

	//up
	if(r-1 >= 0 && matrix[r-1][c] > matrix[r][c])
		len = max(len, dfs(matrix, dp, r-1, c, tmp));

	//right
	if(c+1 < matrix[0].size() && matrix[r][c+1] > matrix[r][c])
		len = max(len, dfs(matrix, dp, r, c+1, tmp));

	//left
	if(c-1 >= 0 && matrix[r][c-1] > matrix[r][c])
		len = max(len, dfs(matrix, dp, r, c-1, tmp));

	dp[r][c] = len;
	return len + 1;

}

int longestIncreasingPath(vector<vector<int>>& matrix){
	vovf dp(matrix.size(), vector<int>(matrix[0].size(), -1));
	int maxlen = INT_MIN;

	for(int i= 0; i < matrix.size(); i++){
		for(int j = 0; j < matrix[0].size(); j++){
		    if(dp[i][j] == -1)
				maxlen = max(maxlen, dfs(matrix, dp, i, j, 0));
		    maxlen = max(maxlen, dp[i][j]);
		}
	}
		
	return maxlen ;

}
};
