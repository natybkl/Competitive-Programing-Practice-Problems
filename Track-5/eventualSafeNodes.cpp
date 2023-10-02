class Solution {
public:
    bool isSafe(vector<vector<int>>& graph, unordered_set<int>& ans, vector<int>& state, int idx){
        if(state[idx] == 2)
            return false;
        
        if(state[idx] == 3)
            return ans.find(idx) != ans.end();
        
        bool tmp = true;
        state[idx] = 2;
        for(int& i: graph[idx]){
            tmp = tmp && isSafe(graph, ans, state, i);
        }
        
        state[idx] = 3;
        if(tmp)
            ans.insert(idx);
        
        return tmp;
    }
    
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int r = graph.size();
        unordered_set<int> ans;
        vector<int> state(r, 1); // 1 - unvis    2 - underInv      3 - vis 
        
        for(int i = 0; i < r; i++){
            if(state[i] == 1 && isSafe(graph, ans, state, i)){
                ans.insert(i); 
            }
        }
        
        vector<int> v(ans.begin(), ans.end());
        sort(v.begin(), v.end());
        return v;
    }
};
