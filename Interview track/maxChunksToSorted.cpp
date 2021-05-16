class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
    	int count = 0, i;
        unordered_map<int, int> idx;
        
        for(i = 0; i < arr.size(); i++) {
            idx[arr[i]] = i;
        }
        
        i = 0;
        while(i < arr.size()) {
            int cur = i;
            while(i <= idx[cur]) {
                idx[cur] = max(idx[cur], idx[i]);
                i++;
            }
            count++;
            i = idx[cur] + 1;
        }

        return count;
    }
};

