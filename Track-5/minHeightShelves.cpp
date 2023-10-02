class Solution {
public:
    int minHeightShelves(vector<vector<int>>& books,int width) 
    {
        int sz = books.size();
        vector<int> memo(sz+1,0);
        
        for(int i = 0; i < sz; i++)
        {
            int j = i;
            int w = books[i][0];
            int maxhgt = 0;
            int minhgt = INT_MAX;
            while(j >= 0 && w <= width)
            {
                if(j - 1 >= 0)
                    w += books[j-1][0];
                maxhgt = max(maxhgt, books[j][1]);
                minhgt = min(minhgt, memo[j] + maxhgt);
                j--;
            }
            
            memo[i+1] = minhgt;
        }
        
        
        return memo.back();
    }
};
