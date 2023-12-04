class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        unordered_map<int, unordered_set<int>> graph;
        unordered_map<int, int> count;
        vector<int> res(k, 0);
        for(auto a:logs){
            graph[a[0]].insert(a[1]);
        }
        
        for(auto a:graph){
            count[a.second.size()]+=1;
        }
        
        for(auto a:count){
            res[a.first - 1] = a.second;
        }
        
        return res;
    }
};
