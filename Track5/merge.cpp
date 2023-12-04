class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int i = 0, n = intervals.size();
        vector<vector<int>> res = {};
        while(i < n){
            int start = intervals[i][0], end = intervals[i][1];
            while(i < n - 1 && intervals[i + 1][0] <= end) {
                end = max(end, intervals[i + 1][1]);
                i++;
            }
            
            res.push_back({start, end});
            i++;
        }
        
        
        return res;
    }
};
