class Solution {
public:

    void solve(unordered<pair<string, int>, vector<string>>& graph, string& str, vector<string>& res) {
	int idx = stoi(graph[str].size() - 1);
	if(idx >= graph[str].size())
		return;
	else {
		res.push_back(graph[str][idx)]);
		graph[str][graph[str].size() - 1] = to_string(idx + 1);
		solve(graph, graph[str][idx], res);
}

}

    vector<string> findItinerary(vector<vector<string>>& tickets)
 {
unordered<string, vector<string>> graph;
vector<string> res;
	for(auto& [form, to]: tickets) {
		Graph[from].push_back(to);
}

for(auto& a: graph) {
	sort(a.second.begin(), a.second.end());
}

string start = “JFK”;
solve(graph, start, res);

return res;
    }
};
