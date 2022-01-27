class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end());
        int h_idx, n = citations.size();
        for(h_idx = 1; h_idx <= n; ++h_idx){
            //cout << h_idx << ' ';
            if(citations[n - h_idx] < h_idx) break;
        }
        
        return h_idx - 1;
    }
};
