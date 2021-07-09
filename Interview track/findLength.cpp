class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int x = nums1.size();
        int y = nums2.size();
        int i,j,ct,ans = 0;
        
        vector<vector<int>> memo(y, vector<int>(x, 0));
        queue<pair<int,int>> pts;

        for(int i = 0; i < y; i++){
            for(int j = 0; j < x; j++){
                if(nums2[i] == nums1[j]){
                     memo[i][j] = 1;        
                     pts.push({i,j});
                }
            } 
        }   

        if(pts.size() == 0)
            return 0;
        
        while(!pts.empty()){
            auto a = pts.front();
            pts.pop();
            i = a.first;
            j = a.second;
            ct = 1;
            while(i+1 < y && j+1 < x){
                memo[i][j] = 0;
                if(memo[++i][++j] != 1)
                      break;      
                ct++;
            }

            ans = max(ans, ct);
        }
        
        return ans;
    }
};




class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int x = nums1.size(), y = nums2.size(), res = 0;
        vector<vector<int>> arr(x + 1, vector<int>(x + 1, 0));

        for(int i = 1; i <= x; i++){
            for(int j = 1; j <= y; j++){
                if(nums1[i - 1] == nums2[j - 1])
                   arr[i][j] = arr[i - 1][j - 1] + 1;

                res = max(res, arr[i][j]);       
            }
        }
        
        return res;
    }
};
