class Solution {
public:
    void dfs(unordered_map<int, vector<int>>& g, vector<int>& subtree, int idx){
        for(int i: g[idx]){
            dfs(g, subtree, i);
            subtree[idx] += subtree[i];
        }
        
        subtree[idx]++;
    }
    
    int countHighestScoreNodes(vector<int>& parents) {
        int N = parents.size();
        unordered_map<int, vector<int>> g;
        vector<int> subtree(N);
        vector<long> ans;
        for(int i = 0; i < N; i++){
            g[parents[i]].push_back(i);
        }
        
        dfs(g, subtree, 0);
        
        for(int i = 0; i < N; i++){
            long tmp = 1;
            if(i) tmp *= (subtree[0] - subtree[i]);
            for(int& j: g[i]){
                tmp *= subtree[j];
            }
            
            ans.push_back(tmp);
        }
        
        int _max = *max_element(ans.begin(), ans.end());
        int cnt = 0;
        for(int i: ans)
            if(i == _max) cnt++;
        
                
        return cnt;
    }
    
    
};
