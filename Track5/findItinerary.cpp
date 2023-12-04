#define Graph unordered_map<string,priority_queue<string,vector<string>, greater<string>>>

class Solution {
public:
    void solve(Graph& graph, string from, vector<string>& res) {
        if(graph.find(from) == graph.end()) {
            res.push_back(from);
            return;
        }
            
        while(!graph[from].empty()) {
            string to = graph[from].top();
            graph[from].pop();
            solve(graph, to, res);      
        }
        
        res.push_back(from);     
    }

    vector<string> findItinerary(vector<vector<string>>& tickets) {
        Graph graph;
        vector<string> res;
        
        for(auto& ticket: tickets) {
                graph[ticket[0]].push(ticket[1]);
        }

        solve(graph, "JFK", res);
        reverse(res.begin(), res.end());
        return res;
 }

};
